#include "declaration.h"
#include <stdio.h>//dell

int		ft_is_printable(char c)
{
	if (c <= 31 || c == 127)
		return (0);
	return (1);
}

int		ft_check_double(char *buf, int s)//проверка на различие .ox
{
	if (buf[s - 1] == buf[s - 2] || buf[s - 1] == buf[s - 3] ||
			buf[s - 2] == buf[s - 3])
		return (0);
	if (buf[s] != '\n')
		return (0);
	return (1);
}

int		ft_get_end_of_line(char *buf, int start, int nb_lines) // кол-во символов в буфере + 1
{
	long	i;
	long	j;

	i = 0;
	j = start;
	while (buf[start] != '\n' && buf[start])
	{
		i++;
		start++;
	}
	if (i >= 1 && buf[j - 1] == '\n')
			return (((i + 1) * nb_lines) + (j + 1));
	return (-1);
}

int		ft_check_first_line(char *buf)
{
	int		size; //сколько цифр в кол-ве строк
	int		i;
	int		nb_lines; //количество строк
	char	case_; //точка

	i = -1;
	while (buf[++i] != '\n');
	case_ = buf[i - 3]; 
	buf[i - 3] = '\0';
	nb_lines = ft_atoi(buf);
	size = ft_strlen(ft_itoa(nb_lines));
	buf[i - 3] = case_;
	i = size;
	while (i < size + 3) // 3 потому что .xo
		if (!(ft_is_printable(buf[i++])))
			return (-1);
	if (!ft_check_double(buf, i) ||
			ft_get_end_of_line(buf, i + 1, nb_lines) == -1)
		return (-1);
	return (ft_get_end_of_line(buf, i + 1, nb_lines));
}
