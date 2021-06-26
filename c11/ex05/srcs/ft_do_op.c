#include "../includes/ft.h"

int	check(char op, int b)
{
	if (op == '/' && b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (op == '%' && b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

void	ft_do_op(int argc, char *argv[])
{
	if (check((argv[2][0]), ft_atoi(argv[3])) && (argc == 4))
	{
		ft_putnbr((ft_calcs(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]))));
		ft_putchar('\n');
	}
}
