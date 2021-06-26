#include "ft_btree.h"
#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	t_btree	*tree_t;

	tree_t = btree_create_node("Hello world!\n");
	ft_putstr((char *)tree_t->item);
	return (0);
}
