/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tower.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 15:56:57 by pchichar          #+#    #+#             */
/*   Updated: 2021/06/20 20:31:51 by smitzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOWER_H

# define TOWER_H
# define SIZE 4

typedef struct s_params
{
	char	up[SIZE];
	char	down[SIZE];
	char	left[SIZE];
	char	right[SIZE];
}			t_params;

int	arg_is_valid(char *av, t_params *params);
int	resolve(char grid[SIZE][SIZE], t_params *params);
int	search_empty_case(char grid[SIZE][SIZE], int *x, int *y);
int	can_put_value(char grid[SIZE][SIZE], int x, int y, int value);
int	line_is_valid(char grid[SIZE][SIZE], t_params *params, int y);
int	column_is_valid(char grid[SIZE][SIZE], t_params *params, int x);
int	calculete_views(char grid[SIZE][SIZE], int pos);
int	print_grid(char grid[SIZE][SIZE]);

#endif
