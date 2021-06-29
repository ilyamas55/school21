#include "ft_bsq.h"

void	ft_print_map(char *buf, int *res, t_map *map)
{
	int	value;
	int	max;
	int	i;
	int	border;
	int	stop;

	max = res[1];
	i = 0;
	value = res[0];
	border = (value - 1) * -(map->nb_c + 1);
	stop = 0;
	while (buf[i])
	{
		if (i >= max + border - value + 1 && i <= max + border && stop == 0)
		{
			if (i == max + border)
				border = border + map->nb_c + 1;
			if (border > 0)
				stop = 1;
			buf[i] = map->square;
		}
		i++;
	}
	write(1, &buf[0], i);
}

int	ft_print_global(char *buf)
{
	t_map		*map;
	int			*res;
	int			ij[2];

	if (buf != NULL)
	{
		map = get_map_info(&buf);
		ij[0] = 0;
		ij[1] = 0;
		ft_init_res_nmax_emax(&res);
		ft_inits(buf, map, ij, &res);
		if (res[0] == -1)
			write(1, "map error\n", 10);
		else
			ft_print_map(buf, res, map);
		free(res);
		buf = buf - map->nb_char;
		free(map);
		free(buf);
	}
	else
		write(1, "map error\n", 10);
	return (0);
}
