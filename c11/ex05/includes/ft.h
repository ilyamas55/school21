#ifndef FT_H
# define FT_H
# include <unistd.h>

typedef struct s_calc
{
	char	op;
	int		(*ft)(int a, int b);
}	t_calc;

int		ft_calcs(int x, char operat, int y);
int		ft_sum(int a, int b);
int		ft_sub(int a, int b);
int		ft_mul(int a, int b);
int		ft_mod(int a, int b);
int		ft_div(int a, int b);
int		check(char op, int b);
int		ft_calc(int x, char operat, int y);
void	ft_do_op(int argc, char *argv[]);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nbr);

#endif
