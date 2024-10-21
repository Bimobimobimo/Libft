/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:14:50 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/21 15:12:34 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	ft_f(unsigned int i, char c)
{
	c++;
	i = 0;
	return (c);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	i = 0;
	new_str = malloc(ft_strlen(s) + 1);
	if (new_str == NULL)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/* int	main(void)
{
	const char	*str = "Gdkkn";
	char		*result = ft_strmapi(str, ft_f);
	printf ("resultat : %s\n", result);
	free(result);
	return (0);
} */

/* NOTES TO SELF

- char (*f) in the prototype : bc it is a pointer to a function that 
returns a char, and not a function that return a pointer to char.
*/