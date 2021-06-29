#include "ft_bsq.h"

void	ft_init_res_nmax_emax(int **res)
{
	*res = malloc(sizeof(int) * 2);
	(*res)[0] = -1;
	(*res)[1] = -1;
}

void	ft_init_doubletab(int ***tab, int nb_c)
{
	*tab = malloc(sizeof(int *) * 2);
	(*tab)[0] = malloc(sizeof(int) * nb_c);
	(*tab)[1] = malloc(sizeof(int) * nb_c);
	ft_init_tab(&(*tab)[0], nb_c);
	ft_init_tab(&(*tab)[1], nb_c);
}

void	ft_init_tab(int **tab, int nb_c)
{
	int	i;

	i = 0;
	while (i < nb_c)
		(*tab)[i++] = -1;
}

void	ft_switch_init_tab(int **tab0, int **tab1)
{
	int	*tab_temp;

	tab_temp = *tab0;
	*tab0 = *tab1;
	*tab1 = tab_temp;
}

void	ft_free_doubletab(int ***tab)
{
	free((*tab)[0]);
	free((*tab)[1]);
	free(*tab);
}
