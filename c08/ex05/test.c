#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int main(void)
{
	char	*s[3] = {"sigl", "ilya", "alexandr"};
	struct	s_stock_str *t = ft_strs_to_tab(3, s);
	ft_show_tab(t);
}
