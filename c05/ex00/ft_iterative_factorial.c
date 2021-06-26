int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	res = 1;
	i = 0;
	while (i++ < nb)
		res *= i;
	return (res);
}
