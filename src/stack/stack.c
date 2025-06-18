/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 20:28:57 by tde-souz          #+#    #+#             */
/*   Updated: 2025/06/17 21:06:45 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*stack_init(int argc, char *argv[])
{
	t_list	*stack;
	t_data	*data;
	int		i;

	i = 1;
	while (i < argc)
	{
		data = (t_data *)malloc(sizeof(t_data));
		data->value = atoi(argv[i]);
		if (i == 1)
			stack = lst_new(data);
		else
			lstadd_front(&stack, lst_new(data));
		i++;
	}
	return (stack);
}

void	stack_print(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		printf("%d ", ((t_data *)(tmp->content))->value);
		tmp = tmp->next;
	}
	printf("\n");
}

static void	data_delete(void *data)
{
	free(data);
}

void	stack_clear(t_list *stack)
{
	lstclear(&stack, data_delete);
}
