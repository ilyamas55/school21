#include <unistd.h>

void	ft_putchar(char c);

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
