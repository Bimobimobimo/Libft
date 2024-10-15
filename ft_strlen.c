/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:09:18 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/15 10:35:28 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* int	main(void)
{
	const char str[1000] = "Hello !";
	printf("La chaine <<%s>> fait %zu carateres.\n", str, ft_strlen(str));
	return (0);
} */

/* NOTES TO SELF :
- size_t is used for sizes & memory. Is is unsigned (no negative value). Plus,
it adapts to the number of bits of the system (32 bits syst corresponds to a
size_t that acts like a 32 bit unsigned int).
*/