#include "header.h"

int	dict(char *dictionary, char *str)
{
	char	**arr;
	char	**array;
	int		j;
	int		count;
	int		i;

	i = 0;
	j = 0;
	arr = allocation(str);
	array = copy_dict(dictionary);
	count = row_count(read_dict(dictionary));
	if (arr[0][0] == '0' && arr[0][1] == '0' && arr[0][2] == '0')
	{
		validate_word(ft_atoi(array, count, "0"));
		return (0);
	}
	while (i < (ft_strlen(str) / 3 + calculate(str)))
	{
		validate_data(arr[i], array, count);
		if (ft_strcmp(arr[i++], "000") != 0)
			typeord(array, count, ft_strlen(str) / 3 + calculate(str), i);
	}
	free(arr);
	free(array);
	return (0);
}

char	**allocation(char *a)
{
	int		leng;
	int		i;
	int		start;
	char	**arr;

	i = 0;
	leng = ft_strlen(a);
	start = calculate(a);
	arr = (char **)malloc((leng / 3 + start) * sizeof(char *));
	if (!(arr))
		print_error("Allocation Memory Error");
	while (i < (leng / 3) + start)
	{
		arr[i] = (char *)malloc((3 + 1) * sizeof(char));
		if (!(arr[i]))
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

char	**copy_dict(char *dictionary)
{
	int		i;
	int		j;
	int		k;
	char	*buf;
	char	**a;

	buf = ft_strdup(read_dict(dictionary));
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

int	validate_word(char *str)
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
