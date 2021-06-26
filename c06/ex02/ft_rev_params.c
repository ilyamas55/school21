#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		while (--argc)
		{
			i = 0;
			while (argv[argc][i])
				ft_putchar(argv[argc][i++]);
			ft_putchar('\n');
		}
	}
	return (0);
}
