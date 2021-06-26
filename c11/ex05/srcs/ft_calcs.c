#include "../includes/ft.h"

int	ft_calcs(int x, char operat, int y)
{
	int		i;
	t_calc	calc[5];

	calc[0].op = '+';
	calc[0].ft = ft_sum;
	calc[1].op = '-';
	calc[1].ft = ft_sub;
	calc[2].op = '*';
	calc[2].ft = ft_mul;
	calc[3].op = '%';
	calc[3].ft = ft_mod;
	calc[4].op = '/';
	calc[4].ft = ft_div;
	i = 0;
	while (i < 5)
	{
		if (operat == calc[i].op)
			return (calc[i].ft(x, y));
		i++;
	}
	return (0);
}
