#include <unistd.h>
#include <stdio.h>

int	ft_putnbr_base(int nb, char *base);

void	ft_putstr(char *str)
{
	int i = 0;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(void)
{
	int i = 13;
	char	s22[] = {"wec"};
	/*printf("%d", ft_(s11));
	ft_putstr(ft_strlen(s11));*/
	ft_putnbr_base(i, s22);
}
