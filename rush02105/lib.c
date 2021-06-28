#include "header.h"

char	*ft_atoi(char **a, int leng, char *find)
{
	int		i;
	int		find_i;
	int		index;

	i = 0;
	index = 0;
	find_i = 0;
	while (i < leng)
	{
		while (find[find_i] && (find[find_i] == a[i][index]))
		{
			find_i++;
			index++;
			if (a[i][index] == ':' && find[find_i] == '\0')
			{
				return (a[i]);
			}
		}
		i++;
		find_i = 0;
		index = 0;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
