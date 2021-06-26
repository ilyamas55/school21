/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 15:22:04 by bkristen          #+#    #+#             */
/*   Updated: 2021/06/20 19:28:18 by smitzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "tower.h"

int	column_is_valid(char grid[SIZE][SIZE], t_params *params, int x)
{
	int	i;
	int	max_size;
	int	views;

	max_size = 0;
	views = 0;
	i = -1;
	while (++i < SIZE)
	{
		views += grid[i][x] > max_size;
		if (grid[i][x] > max_size)
			max_size = grid[i][x];
	}
	if (views != params->up[x])
		return (0);
	max_size = 0;
	views = 0;
	while (--i >= 0)
	{
		views += grid[i][x] > max_size;
		if (grid[i][x] > max_size)
			max_size = grid[i][x];
	}
	if (views != params->down[x])
		return (0);
	return (1);
}

int	line_is_valid(char grid[SIZE][SIZE], t_params *params, int y)
{
	int	i;
	int	max_size;
	int	views;

	max_size = 0;
	views = 0;
	i = -1;
	while (++i < SIZE)
	{
		views += grid[y][i] > max_size;
		if (grid[y][i] > max_size)
			max_size = grid[y][i];
	}
	if (views != params->left[y])
		return (0);
	max_size = 0;
	views = 0;
	while (--i >=0)
	{
		views += grid[y][i] > max_size;
		if (grid[y][i] > max_size)
			max_size = grid[y][i];
	}
	if (views != params ->right[y])
		return (0);
	return (1);
}

int	can_put_value(char grid[SIZE][SIZE], int x, int y, int value)
{
	int	i;

	i = -1;
	while (++i < SIZE)
		if (grid[y][i] == value || grid[i][x] == value)
			return (0);
	return (1);
}

int	search_empty_case(char grid[SIZE][SIZE], int *x, int *y)
{
	int	i;
	int	j;

	i = -1;
	while (i++ < SIZE)
	{
		j = -1;
		while (++j < SIZE)
			if (grid[i][j] == 0)
			{
				*x = j;
				*y = i;
				return (1);
			}
	}
	return (0);
}
