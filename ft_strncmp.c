/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:38:03 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/19 16:01:21 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	const char s1[1000] = "\200";
	const char s2[1000] = "\0";
	size_t	n = 6;
	
	printf("Ma fonction :   difference entre <<%s>> et <<%s>> ", s1, s2);
	printf("sur %zu bits = %d\n", n, ft_strncmp(s1, s2, n));
	
	printf("Fn officielle : difference entre <<%s>> et <<%s>> ", s1, s2);
	printf("sur %zu bits = %d\n", n, strncmp(s1, s2, n));
	
	return (0);
} */

/* 
NOTES TO SELF

- char *s1 and *s2 are transformed to unsigned char, to make sure that
it can't be a negative value. A signed char is [-128;127], an unsigned
char is [0;255]. The char \200 as a value of 128 if unsigned, -128 
if signed.
*/
