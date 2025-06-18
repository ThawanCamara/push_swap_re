/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 13:16:04 by tde-souz          #+#    #+#             */
/*   Updated: 2025/06/17 20:42:01 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

t_list	*lst_new(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	list->content = content;
	list->next = NULL;
	return (list);
}

void	lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	tmp = (*lst);
	(*lst) = new;
	new->next = tmp;
}

void	lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

int	lstsize(t_list *lst)
{
	int		len;
	t_list	*tmp;

	if (!lst)
		return (0);
	len = 0;
	tmp = lst;
	while (tmp && ++len)
		tmp = tmp->next;
	return (len);
}

void	lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*tmp;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		node = tmp;
		tmp = tmp->next;
		del(node->content);
		free(node);
	}
	*lst = NULL;
}
