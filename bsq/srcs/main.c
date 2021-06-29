#include "ft_bsq.h"

void	ft_inits(char *buf, t_map *map, int *ij, int **res)
{
	int	**tab;

	ft_init_doubletab(&tab, map->nb_c);
	while (buf[ij[0] * (map->nb_c + 1) + ij[1]] && ij[0] < map->nb_l)
	{
		while (ij[1] < map->nb_c)
		{
			ft_fill_tab(buf, ij, map, &tab);
			ft_fill_res(res, &tab, ij, map);
			if ((*res)[0] == -1)
				return ;
			ij[1]++;
		}
		if (buf[ij[0]++ *(map->nb_c + 1) + ij[1]] != '\n')
		{
			ft_free_doubletab(&tab);
			(*res)[0] = -1;
			return ;
		}
		ij[1] = 0;
		ft_switch_init_tab(&tab[0], &tab[1]);
	}
	if (buf[ij[0] * (map->nb_c + 1) + ij[1]] != '\0' || ij[0] != map->nb_l)
		(*res)[0] = -1;
	ft_free_doubletab(&tab);
}

int	main(int argc, char **argv)
{
	char	*buf;
	int		k;

	if (argc == 1)
	{
		buf = ft_get_buf_standard();
		return (ft_print_global(buf));
	}
	else
	{
		k = 1;
		while (k < argc)
		{
			buf = ft_get_buf_file(argv[k]);
			ft_print_global(buf);
			if (argc > 2)
				write(1, "\n", 1);
			k++;
		}
		return (0);
	}
}
