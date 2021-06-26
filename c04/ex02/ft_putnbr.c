-/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smitzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:14:47 by smitzi            #+#    #+#             */
/*   Updated: 2021/06/14 18:31:42 by smitzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	b;
	
	if (nb < 0)
	{
		ft_putchar('-');
		b = -nb;
	}
	else 
		b = nb;
	if (b >= 10)
		ft_putnbr(b / 10);
	ft_putchar((b % 10) + '0');
}
