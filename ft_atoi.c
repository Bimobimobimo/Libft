/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:49:28 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/19 15:59:42 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_overflow_atoi(const char *nptr, int sign)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (nptr[i] < '1' || nptr[i] > '9')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		i++;
		j++;
	}
	if (j > 18 && sign > 0)
		return (-1);
	else if (j > 18 && sign < 0)
		return (0);
	else
		return (1);
}

int	ft_atoi(const char *nptr)
{
	long	i;
	long	nb;
	int		sign;

	i = 0;
	sign = 1;
	nb = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		nb = nb * 10 + (nptr[i++] - '0');
	if (ft_overflow_atoi(nptr, sign) != 1)
		return (ft_overflow_atoi(nptr, sign));
	return (sign * nb);
}

/* int	main(void)
{
	const char	str[] = "-123THERE IS A NYANCAT UNDER YOUR BED";
	int	a = atoi(str);
	int	f = ft_atoi(str);
	printf ("______ATOI______\n");
	printf ("%s devient %d\n\n", str, a);
	printf ("_____FT_ATOI_____\n");
	printf ("%s devient %d\n\n", str, f);
	return 0;
} */

/* NOTES TO SELF :cc
- atoi = ASCII to int.
- while(*nptr...){...*nptr++...} : equals to while(nptr[i]...){i++} : it 
increments nptr directly instead of i.
- when there is an overflow > 18 digits to convert, atoi returns 0 or -1 
depending on the sign : if > 0 it returns -1, else if < 0 it returns 0.
*/
