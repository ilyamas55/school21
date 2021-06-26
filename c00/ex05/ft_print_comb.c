/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smitzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 19:00:32 by smitzi            #+#    #+#             */
/*   Updated: 2021/06/10 19:00:45 by smitzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_comma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	a[3];

	a[0] = '0';
	while (a[0] <= '9')
	{
		a[1] = '0';
		while (a[1] <= '9')
		{
			a[2] = '0';
			while (a[2] <= '9')
			{
				if (a[0] < a[1] && a[1] < a[2])
				{
					ft_putchar(a[0]);
					ft_putchar(a[1]);
					ft_putchar(a[2]);
					if (!(a[0] == '7' && a[1] == '8' && a[2] == '9'))
						ft_comma();
				}
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}
