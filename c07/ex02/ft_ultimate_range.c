#include <stdlib.h>
int ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		size = max - min;
		if (size < 0)
			return (-1);
		*range = (int *)malloc(sizeof(int) * size);
		i = 0;
		while (min < max)
		{
			(*range)[i] = min;
			min++;
			i++;
		}
	}
	return (size);
}
