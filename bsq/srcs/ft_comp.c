#include "ft_bsq.h"

int	ft_strlen(char *str)
{
	long	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_str_is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	res;

	res = 0;
	while (ft_str_is_numeric(*str))
		res = 10 * res + *str++ - '0';
	return (res);
}

void	ft_fill_nbr(char **res, int nbr, int rang)
{
	if (nbr < 10)
		(*res)[rang] = nbr + '0';
	else
	{
		ft_fill_nbr(res, nbr % 10, rang);
		ft_fill_nbr(res, nbr / 10, rang - 1);
	}
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int		len;
	int		compteur;

	if (nbr == 0)
		return ("0");
	if (nbr == 1)
		return ("1");
	len = 1;
	compteur = 1;
	while (compteur <= nbr)
	{
		compteur = compteur * 10;
		len++;
	}
	res = malloc(sizeof(char) * len);
	ft_fill_nbr(&res, nbr, len - 2);
	res[len - 1] = '\0';
	return (res);
}
