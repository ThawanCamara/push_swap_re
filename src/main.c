/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 13:00:53 by tde-souz          #+#    #+#             */
/*   Updated: 2025/06/17 21:05:18 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_app	app;
	
	if (check_input(argc, argv))
		return (1);

	app.stack_a = stack_init(argc, argv);
	stack_print(app.stack_a);

	// Clearing
	stack_clear(app.stack_a);
	stack_clear(app.stack_b);
	return (0);
}
