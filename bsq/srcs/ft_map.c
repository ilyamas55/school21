#include "ft_bsq.h"

char	*ft_get_buf(char *path, int buf_size)
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

t_map	*get_map_info(char **buf)
{
	int			i;
	int			j;
	t_map		*map;

	map = malloc(sizeof(t_map));
	i = 0;
	while ((*buf)[i] != '\n')
		i++;
	map->empty = (*buf)[i - 3];
	map->obstacle = (*buf)[i - 2];
	map->square = (*buf)[i - 1];
	map->nb_char = i + 1;
	(*buf)[i - 3] = '\0';
	map->nb_l = ft_atoi(*buf);
	(*buf)[i - 3] = map->empty;
	(*buf) = (*buf) + i + 1;
	j = 0;
	if (map->nb_l > 0)
		while ((*buf)[j] != '\n')
			j++;
	map->nb_c = j;
	return (map);
}

int	ft_min_close(int **tab, int i, int j)
{
	int	n_min;

	if (i == 0 || j == 0)
		return (0);
	n_min = tab[0][j];
	if (tab[0][j - 1] < n_min)
		n_min = tab[0][j - 1];
	if (tab[1][j - 1] < n_min)
		n_min = tab[1][j - 1];
	return (n_min);
}

void	ft_fill_tab(char *buf, int *ij, t_map *map, int ***tab)
{
	if (buf[ij[0] * (map->nb_c + 1) + ij[1]] == map->obstacle)
		(*tab)[1][ij[1]] = 0;
	else if (buf[ij[0] * (map->nb_c + 1) + ij[1]] == map->empty)
		(*tab)[1][ij[1]] = ft_min_close(*tab, ij[0], ij[1]) + 1;
	else
		(*tab)[1][ij[1]] = -1;
}

void	ft_fill_res(int **res, int ***tab, int *ij, t_map *map)
{
	if ((*tab)[1][ij[1]] == -1)
	{
		(*res)[0] = -1;
		ft_free_doubletab(tab);
	}
	else if ((*tab)[1][ij[1]] > (*res)[0])
	{
		(*res)[0] = (*tab)[1][ij[1]];
		(*res)[1] = ij[0] * (map->nb_c + 1) + ij[1];
	}
}
