#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int	*newtab;
	int	i;

    newtab = (int*)malloc(sizeof(tab) * length);
	if (newtab == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		newtab[i] = f(tab[i]);
		i++;
	}
	return (newtab);
}
