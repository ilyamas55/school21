#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}
