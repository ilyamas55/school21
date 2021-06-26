#include <unistd.h>
#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	b;

	if (nb < 0)
	{
		ft_putchar('-');
		b = -nb;
	}
	else
		b = nb;
	if (b >= 10)
		ft_putnbr(b / 10);
	ft_putchar((b % 10) + '0');
}


void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	write(1, str, i);
}

void	ft_putnbarr(int * num, int l)
{
	while (l-- > 0)
	{
		ft_putnbr(*num++);
		ft_putchar(' ');
	}
}
int main(void)
{
	int *arr;
	//ft_putstr(ft_ultimate_range(&arr, 5,20));
	printf("%d\n", ft_ultimate_range(&arr, 5, 1000));
}
