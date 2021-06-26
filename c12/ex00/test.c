#include "ft_list.h"

void	ft_putchar(char c);
void	ft_putstr(char *str);
t_list  *ft_create_elem(void *data);

int main(void)
{
	t_list	*list;

	list = ft_create_elem("Hello");
	list->next = ft_create_elem(" ");
	list->next->next = ft_create_elem("world");
	while (list)
	{
		ft_putstr((char *)(list->data));
		ft_putchar(' ');
		ft_putstr((char *)(list->next->data));
		ft_putchar(' ');
		ft_putstr((char *)(list->next->next->data));
		ft_putchar('\n');
		return (0);
	}
}
