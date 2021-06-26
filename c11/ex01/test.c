#include <unistd.h>

void ft_putnbr(int nb);
int *ft_map(int *tab, int length, int(*f)(int));
void ft_putchar(char c);

int ft_plusone(int n)
{
	return (n + 1);
}

void ft_printtab(int *tab, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		ft_putnbr(tab[i++]);
		ft_putchar(' ');
	}
}

int main(void)
{
	int	tab[] = {1,2,3,4,5,6,7,8,9,0};
	int *arr;

	arr = ft_map(tab, 10, &ft_plusone);
	ft_printtab(arr, 10);
	return (0);
}
