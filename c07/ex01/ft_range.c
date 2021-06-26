#include <stdlib.h>
int *ft_range(int min, int max)
{
	int	*res;
	int	size;
	int i;

	if (min >= max)
	{
		res = NULL;
		return (res);
	}	
	else
	{
		size = max - min;
		res = (int *)malloc(sizeof(*res) * size);
		i = 0;
		while (min < max)
		{
			res[i] = min;
			min++;
			i++;
		}
	}
	return (res);
}
