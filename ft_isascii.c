/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:11:34 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/19 16:00:12 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* int main(void)
{
	int	a;
	int b;

	a = '\0';
	b = 128;
	printf ("ft_isascii : %d\n", ft_isascii(a));
	printf ("ft_isascii : %d\n", ft_isascii(b));
	return (0);
} */
