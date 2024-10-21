/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:43:18 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/19 16:00:02 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*data;

	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	data = malloc (nmemb * size);
	if (data == NULL)
		return (NULL);
	ft_bzero(data, nmemb * size);
	return (data);
}

/* int	main(void)
{
	size_t		nmemb;
	size_t		size;
	char	*data;

	nmemb = 9;
	size = 0;
	data = ft_calloc(nmemb, size);
	if (data == NULL)
	{
		printf ("Allocation failed.");
		free(data);
		return 0;
	}
	printf ("Allocation succeeded.");
	free (data);
	return 0;
} */

/* NOTES TO SELF

- nmemb is the number of char/int/whatever variable
- size is the (sizeof) in malloc : the size of 1 nmemb
- size_t is the size of an unsigned int
- SIZE_MAX is the max value of size_t
- size != 0 bc you can't divide by 0
- (nmemb > SIZE_MAX / size) is written this way bc (nmemb * size > SIZE_MAX)
cannot be tested : if the result is indeed > SIZE_MAX, the max value
will be exceeded and the computer won't be able to calculate it
*/
