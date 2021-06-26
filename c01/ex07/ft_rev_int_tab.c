/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smitzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 21:47:37 by smitzi            #+#    #+#             */
/*   Updated: 2021/06/11 21:51:21 by smitzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	char	t;

	i = -1;
	while (++i < --size)
	{
		t = tab[i];
		tab[i] = tab[size];
		tab[size] = t;
	}
}
