/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smitzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 19:39:50 by smitzi            #+#    #+#             */
/*   Updated: 2021/06/13 19:43:05 by smitzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print(int x, char start, char mid, char end)
{
	ft_putchar(start);
	while ((x - 1) > 1)
	{
		ft_putchar(mid);
		x--;
	}
	if (x > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print(x, '/', '*', '\\');
		y--;
		while (y >1)
		{
			ft_print(x, '*', ' ', '*');
			y--;
		}
		if (y > 0)
			ft_print(x, '\\', '*', '/');
	}
}
