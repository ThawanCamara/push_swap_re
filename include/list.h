/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:26:28 by tde-souz          #+#    #+#             */
/*   Updated: 2025/06/14 17:26:38 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include <stdlib.h>

typedef struct s_list	t_list;

struct	s_list
{
	void	*content;
	t_list	*next;
};

t_list	*lst_new(void *content);
void	lstadd_front(t_list **lst, t_list *new);
void	lstadd_back(t_list **lst, t_list *new);
int		lstsize(t_list *lst);
void	lstclear(t_list **lst, void (*del)(void*));

#endif
