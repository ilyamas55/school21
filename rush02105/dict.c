/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiong <ktiong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 12:26:53 by ktiong            #+#    #+#             */
/*   Updated: 2021/06/26 23:52:26 by smitzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		dict(char *dictionary, char *str) // THis is Step 2 
{
	char	**arr;
	char	**array;
	int		j;
	int		count;
	int		i;

	i = 0;
	j = 0;
	// This is will three important Functions ( Step 3 , Step 4 , Step 5)
	arr = allocation(str); //Step 3  
	array = copy_dict(dictionary); // Step 4 Read through the 
	count = row_count(read_dict(dictionary)); // Read through the dictionary line 
	if (arr[0][0] == '0' && arr[0][1] == '0' && arr[0][2] == '0') // This is just find three digit in an array 
	{
		validate_word(ft_atoi(array, count, "0"));// Validate the dictionary word 
		return (0);
	}
	while (i < (ft_strlen(str) / 3 + calculate(str))) // Count the String Lenth 
	{
		validate_data(arr[i], array, count); // Is to Validate the Digit 
		if (ft_strcmp(arr[i++], "000") != 0)
			typeord(array, count, ft_strlen(str) / 3 + calculate(str), i);
	}
	free(arr);
	free(array);
	return (0);
}
// THIS IS STEP 3 ) We allocate an emtpy array using malloc 
char	**allocation(char *a)
{
	int		leng;
	int		i;
	int		start;
	char	**arr;

	i = 0;
	leng = ft_strlen(a);
	start = calculate(a);
	if (!(arr = (char **)malloc((leng / 3 + start) * sizeof(char *)))) 
		print_error("Allocation Memory Error");
	while (i < (leng / 3) + start)
	{
		if (!(arr[i] = (char *)malloc((3 + 1) * sizeof(char))))
		{
			print_error("Allocation Memory Error");
			return (0);
		}
		i++;
	}
	arr = do_your_job(a, arr, leng, start);
	return (arr);
}

char	**do_your_job(char *arg, char **arr, int leng, int first)
{
	int		i;
	int		j;
	int		arg_i;

	arg_i = 0;
	i = 0;
	while (i < (leng / 3) + first)
	{
		j = 0;
		while (1)
		{
			if (j == 3)
			{
				arr[i++][j] = '\0';
				break ;
			}
			if (i == 0 && j == 0 && (leng % 3 == 2))
				arr[i][j++] = '0';
			while (i == 0 && (leng % 3 == 1) && j <= 1)
				arr[i][j++] = '0';
			arr[i][j++] = arg[arg_i++];
		}
	}
	return (arr);
}
//Step 4 ) Is just to count which part in the .dic and read through line by line  
char	**copy_dict(char *dictionary)
{
	int		i;
	int		j;
	int		k;
	char	*buf;
	char	**a;

	buf = ft_strdup(read_dict(dictionary)); // Allocate the copy string into a new memory 
	i = 0;
	j = 0;
	a = creation_arr(buf);
	while (i < row_count(buf))
	{
		k = 0;
		while (buf[j] != '\n')
			a[i][k++] = buf[j++];
		a[i][k] = '\0';
		j++;
		i++;
	}
	free(buf);
	return (a);
}
// THis is from ord.c
int		validate_word(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str[0])
		return (0);
	while (!(str[i] >= 'a' && str[i] <= 'z')
		|| (str[i] >= 'A' && str[i] <= 'Z'))
	{
		i++;
	}
	while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
