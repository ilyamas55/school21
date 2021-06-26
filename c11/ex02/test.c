void	ft_putstr(char *str);
int 	ft_any(char **tab, int(*f)(char*));
void 	ft_putchar(char c);

int	ft_find_separator(char *str)
{
	int i;
	int boo;

	i = 0;
	boo = 0;
	while (str[i])
	{
		if (str[i] < '!')
			boo = 1;
		i++;
	}
	return (boo);
}

int	main(void)
{
	char *arr[4] = {"awdsdfg", "sdfstre", "sdfsdfsfgsfgsg"};

	if (ft_any(arr, &ft_find_separator))
		ft_putstr("TRUE\n");
	else
		ft_putstr("FALSE\n");
	return (0);
}
