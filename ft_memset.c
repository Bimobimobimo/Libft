/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:03:59 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/15 15:01:19 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* int	main(void)
{
	int s[10] = {0};
	int c = 1;
	size_t n = 3;
	ft_memset(s, c, n);
	
	int i = 0;
	while (i < 10)
	{
		printf ("%d ", s[i]);
		i++;
	}
	return (0);
} */
