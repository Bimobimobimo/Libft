/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:02:15 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/19 16:00:49 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	s[15] = "Hello World !";
	int	c = 'o';
	size_t	n = 5;
	char *final = ft_memchr(s, c, n);

	printf ("Chaine : %s\n", s);
	if (final != NULL)
		printf ("ft_memchr : %s\n", final);
	else
		printf ("Character not found\n");
	return (0);
} */
