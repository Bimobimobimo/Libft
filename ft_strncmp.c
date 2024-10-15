/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:38:03 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/15 11:02:24 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	const char s1[1000] = "HellO !";
	const char s2[1000] = "Hello !";
	size_t	n = 5;
	printf("Difference entre <<%s>> et <<%s>> ", s1, s2);
	printf("sur %zu bits = %d\n", n, ft_strncmp(s1, s2, n));
	return (0);
} */
