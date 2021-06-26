/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 13:09:51 by pchichar          #+#    #+#             */
/*   Updated: 2021/06/20 18:00:31 by pchichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tower.h"
#include <unistd.h>

int	print_grid(char grid[SIZE][SIZE])
{
	int	y;
	int	x;

	y = -1;
	while (++y < SIZE)
	{
		x = -1;
		while (++x < SIZE)
		{
			write(1, &grid[y][x], 1);
			if (x != (SIZE -1))
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
	return (1);
}

int	resolve(char grid[SIZE][SIZE], 	t_params *params)
{
	int	x;
	int	y;
	int	value;

	if (search_empty_case(grid, &x, &y))
	{
		value = '0';
		while (++value <= (SIZE + '0'))
		{
			if (can_put_value(grid, x, y, value))
			{
				grid[y][x] = value;
				if (x == (SIZE - 1) && !line_is_valid(grid, params, y))
					continue ;
				if (y == (SIZE - 1) && !column_is_valid(grid, params, x))
					continue ;
				if (resolve(grid, params) == 1)
					return (1);
			}
		}
		grid[y][x] = 0;
		return (0);
	}
	return (1);
}

int	arg_is_valid(char *av, t_params *params)
{
	int		i;
	char	*ptr_params;

	i = -1;
	ptr_params = &params->up[0];
	while (av[++i] != '\0')
	{
		if (i % 2 != 0 && av[i] == ' ')
			continue ;
		if (i % 2 != 0 && av[i] != ' ')
			return (0);
		if (i % 2 == 0 && !(av[i] >= '1' && av[i] <= (SIZE + '0')))
			return (0);
		*ptr_params = av[i] - '0';
		ptr_params++;
	}
	if (SIZE == 4 && i != 31)
		return (0);
	if (SIZE == 6 && i != 47)
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	t_params	params;
	char		grid[SIZE][SIZE];
	int			i;
	int			j;

	if (ac != 2 || !arg_is_valid(av[1], &params))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = -1;
	while (++i < SIZE)
	{		
		j = -1;
		while (++j < SIZE)
			grid[i][j] = 0;
	}
	if (!resolve(grid, &params))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	print_grid(grid);
	return (1);
}
