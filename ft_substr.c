/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:15:23 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/20 10:44:18 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*res;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);
	while (s[i] && i < start)
		i++;
	while (s[i] && j < len)
	{
		res[j] = s[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}

/* int	main(void)
{
	const char	s[100] = "01234";
	unsigned int	start = 10;
	size_t	len = 10;
	char	*res = ft_substr(s, start, len);
	printf ("%s\n", res);
	free (res);
	return (0);
} */

/* NOTES TO SELF

- return (ft_strdup("")) and not directly return("") : we return an
empty string that is \0 terminated (that's different to a NULL !). 
ft_strdup uses a malloc to attribute memory to that string. 
The main, calling ft_substr, has to free(res), and that wouldn't work 
with a litteral string like "" : because it didn't use a malloc, there 
is nothing to free. Attempting to do so might cause a crash.

- for (s == NULL), there is no need to use ft_strdup : it is not an
empty string, but a null pointer = a lack of string. An empty string is
still a valid string, contrary to a NULL. free(NULL) is fine to use, it
doesn't do anything and doesn't crash.

- len > ft_strlen(s + start) : we calculate the length of s starting 
from start. If len is superior to that, it means that it exceeds the
string's end. We want to avoid that when copying the characters, so we
redefine len to be the length of s starting from start.
*/
