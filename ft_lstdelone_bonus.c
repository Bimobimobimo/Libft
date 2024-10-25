/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcollong <lcollong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:53:10 by lcollong          #+#    #+#             */
/*   Updated: 2024/10/25 17:13:34 by lcollong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/* void	del(void *content)
{
	(void)content;
}

int	main(void)
{
	t_list	*lst = ft_lstnew("Hello");
	t_list	*lst2 = ft_lstnew(" World");
	t_list	*lst3 = ft_lstnew(" !");
	t_list	*tmp = lst;
	ft_lstadd_back(&lst, lst2);
	ft_lstadd_back(&lst, lst3);
	printf  ("Before : ");
	while (tmp)
	{
		printf ("%s", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("\nAfter : ");
	
	ft_lstdelone(lst3, del);
	lst2->next = NULL;
	tmp = lst;
	while (tmp)
	{
		printf ("%s", (char *)tmp->content);
		tmp = tmp->next;
	}
	return (0);
} */
