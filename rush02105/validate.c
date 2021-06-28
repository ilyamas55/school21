#include "header.h"

void	validate_1(char **arr, char digit, int count)
{
	char	tmp[3];

	tmp[0] = digit;
	tmp[1] = '\0';
	validate_word(ft_atoi(arr, count, tmp));
	write(1, " ", 1);
	validate_word(ft_atoi(arr, count, "100"));
	write(1, " ", 1);
}

void	validate_2(char **arr, char *digits, int count)
{
	char	tmp[3];
	int		j;

	j = 1;
	tmp[0] = digits[j];
	if (tmp[0] == '1')
		tmp[1] = digits[j + 1];
	else
		tmp[1] = '0';
	tmp[2] = '\0';
	validate_word(ft_atoi(arr, count, tmp));
	write(1, " ", 1);
}

void	validate_3(char **arr, char digit, int count)
{
	char	tmp[3];

	tmp[0] = digit;
	tmp[1] = '\0';
	validate_word(ft_atoi(arr, count, tmp));
	write(1, " ", 1);
}

void	validate_data(char *n, char **word, int count)
{
	int		j;

	j = 0;
	while (j < 3)
	{
		if (n[j] != '0')
		{
			if (j == 0)
				validate_1(word, n[j], count);
			if (j == 1)
				validate_2(word, n, count);
			if (j == 2 && n[1] != '1')
				validate_3(word, n[j], count);
		}
		j++;
	}
}

int	calculate(char *s)
{
	int		i;

	if (ft_strlen(s) % 3 > 0)
		i = 1;
	else
		i = 0;
	return (i);
}
