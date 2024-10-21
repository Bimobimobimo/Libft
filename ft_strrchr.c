/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:18:40 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/19 16:01:27 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if ((char)c == '\0')
		return ((char *)&s[i]);
	i--;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/* int	main(void)
{
	int c = 'o';
	const char str[1000] = "Hello World !";
	printf ("Chaine : %s\n", str);
	printf ("ft_strrchr : %s\n", ft_strrchr(str, c));
	printf ("Pointeur : %p\n", ft_strrchr(str, c));
	return (0);
} */
/* NOTES TO SELF :
- while (i >= 0) and not while (s[i]) because we are decrementing, which means
going towards the beginning of the string, and the beginning is not null
started (unlike the end which is null terminated). So with s[i] we might run
off the beginning of the string.
*/