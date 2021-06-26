/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 12:30:07 by ktiong            #+#    #+#             */
/*   Updated: 2021/06/26 23:49:22 by smitzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*read_dict(char *d)
{
	int		a;
	char	*b;

	b = (char *)malloc(2000 * sizeof(char));
	a = open(d, O_RDONLY);
	if (a == -1)
	{
		print_error("Read error\n");
		return (0);
	}
	read(a, b, 1000);
	close(a);
	return (b);
}

int		ft_is_number(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		else
			i++;
	}
	return (1);
}

void	print_error(char *a)
{
	while (*a != 0)
		write(2, a++, 1);
}

int		error_check(int argc, char *str) // Print Error 
{
	if (argc != 2 && argc != 3)
	{
		print_error("\033[0;31mError\n");
		return (0);
	}
	if (!(ft_is_number(str)))
	{
		print_error("\033[0;31mError\n");
		return (0);
	}
	if (ft_strlen(str) > 37)
	{
		print_error("\033[0;31mDict Error\n");
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv) // This is accepting the Argument Counter 
{
	if (argc == 2)
	{
		if (!(error_check(argc, argv[1])))
			return (0);
		dict("numbers.dict", argv[1]); // This is Step 1 , calls out dict.c
	}
	else if (argc == 3)
	{
		if (!(error_check(argc, argv[2])))
			return (0);
		dict(argv[1], argv[2]);
	}
	if (argc != 2 && argc != 3)
	{
		print_error("Error\n");
		return (0);
	}
}
