/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smitzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 12:43:20 by smitzi            #+#    #+#             */
/*   Updated: 2021/06/13 14:55:51 by smitzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int s11;
	int s22;

	i = 0;
	/*while (s1[i]) s11 += 1;
	while (s2[i]) s22 += 1;
	if (s11 > s22) return (s11 + s22);
	if (s11 < s22) return (s11 - s22);*/ 
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] + s2[i]);
		i++;
	}
	return (0);
}
