/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:38:38 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/19 16:01:02 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/* int	main(void)
{
	const char str[1000] = "Hello World !";
	int	c = 'o';
	printf ("Chaine : %s\n", str);
	printf ("ft_strchr: %s\n", ft_strchr(str, c));
	printf ("Pointeur %p\n", ft_strchr(str, c));
	return (0);
} */
/* NOTES TO SELF :
- (char)c : c is used as its character value instead of its int value.

- (char *)&s[i] : s is a ptr to a const char : it points to a string that 
cannot be modified. With &s[i], we get the adress of the i-th char of s.
Since s is a const char, it doesn't work with what the function is supposed
to return : a char *. We use (char *) to change the type of the ptr.
*/