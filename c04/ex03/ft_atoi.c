/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smitzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 18:33:44 by smitzi            #+#    #+#             */
/*   Updated: 2021/06/15 15:48:36 by smitzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	a(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int			i;
	int			r;
	int			l;
	short int	sign;

	i = 0;
	r = 0;
	l = 0;
	sign = 1;
	while (a(str[i]) || str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
		if (str[i] == '-' || str[i] == '+')
			l++;
		if (a(str[i]) && l > 0)
			return (0);
	}
	while (str[i] >= '0' && str [i] <= '9')
	{
		r = r * 10 + (str[i] - 48) * sign;
		i++;
	}
	return (r);
}
