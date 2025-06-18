/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 14:47:17 by tde-souz          #+#    #+#             */
/*   Updated: 2025/06/17 20:03:01 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <string.h>

static int	isnumeric(char c)
{
	return (c >= '0' && c <= '9');
}

static int	chk_valid_str(char *s)
{
	size_t	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (*(s + i))
		if (isnumeric(*(s + i++)) == 0)
			return (1);
	return (0);
}

static int	chk_max_int(char *s, int c)
{
	size_t		len;
	int			val;
	const char	*max[] = {"2147483647\0", "2147483648\0"};

	val = 0;
	len = 0;
	if (!s)
		return (1);
	len = strlen(s);
	if (len == 10)
	{
		len = 0;
		while (len < 10)
		{
			val = *(max[c] + len) - *(s + len);
			if (val > 0 || val < 0)
				break ;
			++len;
		}
	}
	return (val < 0 && len < 10);
}

int	check_input(int argc, char *argv[])
{
	int	i;
	int	c;

	if (argc < 2)
		return (write(STDERR_FILENO, "Error\n", 6) != 0);
	i = 1;
	while (*(argv + i))
	{
		c = (*(argv + i)[0] == '-' || *(argv + i)[0] == '+');
		if (chk_valid_str(*(argv + i) + c))
			return (write(STDERR_FILENO, "Error\n", 6) != 0);
		if (chk_max_int(*(argv + i) + c, c) != 0)
			return (write(STDERR_FILENO, "Error\n", 6) != 0);
		++i;
	}
	return (0);
}
