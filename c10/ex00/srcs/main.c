#include "../includes/ft.h"

void	ft_d(int r)
{
	char b;

	while (read(r, &b , 1) != 0)
		write(2, &b, 1);
}

int	main(int argc, char **argv)
{
	int		r;

	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc == 2)
	{
		r = open(argv[1], O_RDONLY);
		if (r == -1)
			ft_putstr("Cannot read file.\n");
		else
			ft_d(r);
		close(r);
	}
	return (0);
}
