#include "declaration.h"

char		*get_buf(char *path, int buf_size) //считываем файл и закидываем в баф
{
	int		size;
	int		file;
	char	*buf;

	buf = malloc(sizeof(char) * (buf_size + 1));
	file = open(path, O_RDONLY);
	if (file == -1)
	{
		free(buf);
		return (NULL);
	}
	size = read(file, buf, buf_size);
	if (size == -1)
	{
		free(buf);
		return (NULL);
	}
	buf[size] = '\0';
	return (buf);
}

t_map_info	*get_map_info(char **buf)
{
	int			i;
	int			j;
	t_map_info	*data;

	data = malloc(sizeof(t_map_info));
	i = 0;
	while ((*buf)[i] != '\n')
		i++;
	data->vide = (*buf)[i - 3]; //точка
	data->obs = (*buf)[i - 2]; //препятствие 
	data->plein = (*buf)[i - 1]; //крестик
	data->nb_char = i + 1; // расмер первой строки с $
	(*buf)[i - 3] = '\0'; 
	data->nb_l = ft_atoi(*buf); //кол-во строк
	(*buf)[i - 3] = data->vide; 
	(*buf) = (*buf) + i + 1; //удаление первой строчки
	j = 0;
	if (data->nb_l > 0)
		while ((*buf)[j] != '\n')
			j++;	
	data->nb_c = j; // кол-во столбцов
	return (data);
}

int			ft_min_close(int **tab, int i, int j)
{
	int n_min;

	if (i == 0 || j == 0)
		return (0);
	n_min = tab[0][j];
	if (tab[0][j - 1] < n_min)
		n_min = tab[0][j - 1];
	if (tab[1][j - 1] < n_min)
		n_min = tab[1][j - 1];
	printf("%d", n_min);
	return (n_min);
}

void		ft_fill_tab(char *buf, int *ij, t_map_info *data, int ***tab)
{
	if (buf[ij[0] * (data->nb_c + 1) + ij[1]] == data->obs) //если препятствие
		(*tab)[1][ij[1]] = 0; //то обнуляем 1 таб
	else if (buf[ij[0] * (data->nb_c + 1) + ij[1]] == data->vide) //если точка
		(*tab)[1][ij[1]] = ft_min_close(*tab, ij[0], ij[1]) + 1; //
	else
		(*tab)[1][ij[1]] = -1;
	printf("%d\n", (*tab));
}

void		ft_fill_res(int **res, int ***tab, int *ij, t_map_info *data)
{
	if ((*tab)[1][ij[1]] == -1)
	{
		(*res)[0] = -1;
		ft_free_doubletab(tab);
	}
	else if ((*tab)[1][ij[1]] > (*res)[0])
	{
		(*res)[0] = (*tab)[1][ij[1]];
		(*res)[1] = ij[0] * (data->nb_c + 1) + ij[1];
	}
}
