#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= ft_strlen(str))
	{
		while (str[i] && str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65
					&& str[i] <= 90) || (str[i] >= 98 && str[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	unsigned int	b;
	unsigned int	size;
	char			c;

	if (check_base(base))
	{
		size = ft_strlen(base);
		if (nb < 0)
		{
			write(1, "-", 1);
			b = -nb;
		}
		else
			b = nb;
		if (b >= size)
			ft_putnbr_base(b / size, base);
		c = base[b % size];
		write(1, &c, 1);
	}
}
