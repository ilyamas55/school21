int		ft_count_if(char **tab, int length, int(*f)(char*));
void	ft_putstr(char *str);
int 	ft_any(char **tab, int(*f)(char*));
void	ft_putnbr(int nb);

int	ft_find_separator(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '!')
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char *arr[3] = {"awdsd		fg", "sdfstre", "sd		sdfsfgsfgsg"};

	ft_putnbr(ft_count_if(arr, 3,  &ft_find_separator));
	return (0);
}
