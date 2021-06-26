#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

char	*ft_strdup(char *src)
{
	char	*p;

	p = (char *)malloc(ft_strlen(src) + 1);
	if (p != NULL)
		ft_strcpy(p, src);
	return (p);	
}
