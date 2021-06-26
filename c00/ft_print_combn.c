/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smitzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 19:47:25 by smitzi            #+#    #+#             */
/*   Updated: 2021/06/10 20:27:39 by smitzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}	

int	ft_degree(int n)
{
	int i;

	while (n > 0) 
	{
		i *= 10;
		n--;
			
	}
	return(i);
}

void ft_print_combn(int n)
{
	int i;
	i = ft_degree(n);
	while (i > 0)
	{
		i++;
		while (i > 0)
		{
			if ()
		}
	}
}

int main(void)
{
	ft_print_combn(3);	
}
