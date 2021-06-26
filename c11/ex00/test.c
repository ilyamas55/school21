void ft_foreach(int *tab, int length, void(*f)(int));
void ft_putnbr(int nb);

int main(void)
{
	int	tab[] = {1,2,3,4,5,6,7,8,9,0};
	ft_foreach(tab, 10, &ft_putnbr);
	return (0);
}
