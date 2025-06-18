/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 12:45:31 by tde-souz          #+#    #+#             */
/*   Updated: 2025/06/17 22:01:20 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include "list.h"

typedef struct s_app
{
	t_list	*stack_a;
	t_list	*stack_b;
}	t_app;

typedef struct s_data
{
	int	value;
}	t_data;

int		check_input(int argc, char *argv[]);
t_list	*stack_init(int argc, char *argv[]);
void	stack_print(t_list *stack);
void	stack_clear(t_list *stack);

#endif
