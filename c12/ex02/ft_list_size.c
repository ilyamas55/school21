#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	k;

	k = 0;
	while (begin_list)
	{
		k++;
		begin_list = begin_list->next;
	}
	return (k);
}
