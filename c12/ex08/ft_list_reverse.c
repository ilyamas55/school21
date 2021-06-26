#include "ft_list.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*k;
	t_list	*k2;

	list = *begin_list;
	if (!list || !(list->next))
		return;
	k = list->next;
	k2 = list->next->next;
	list->next = (NULL);
	k->next = list;
	while (k2)
	{
		list = k;
		k = k2;
		k2 = k2->next;
		k->next = list;
	}
	*begin_list = k;
}
