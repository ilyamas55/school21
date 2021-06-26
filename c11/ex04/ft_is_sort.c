int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	
	i = 0;
	if (length < 2)
		return (1);
	if (f(tab[0], tab[length - 1]) < 0)
	{
		while (i < length - 1)
		{
			if (!(f(tab[i], tab[i + 1]) <= 0))
				return (0);
			i++;
		}
	}
	else
	{
		i = length - 1;
		while (i > 0)
		{
			if (!(f(tab[i], tab[i - 1]) <= 0))
				return (0);
			i--;
		}
	}
	return (1);
}
