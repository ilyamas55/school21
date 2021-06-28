#include "header.h"

char	**creation_arr(char *buf)
{
	char	**a;
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	a = (char **)malloc(row_count(buf) * sizeof(char *));
	while (i < row_count(buf))
	{
		count = 0;
		while (buf[j] != '\n')
		{
			count++;
			j++;
		}
		j++;
		a[i++] = (char *)malloc((count + 1) * sizeof(char));
	}
	return (a);
}

int	row_count(char *buf)
{
	int		j;
	int		rows;

	j = 0;
	rows = 0;
	while (buf[j])
	{
		if (buf[j++] == '\n')
			rows++;
	}
	return (rows);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dest;

	src_len = ft_strlen(src);
	dest = (char *)malloc(src_len * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}

int	ft_strcmp(char *s1, char *s2)
{
	int		index;

	index = 0;
	while (s1[index] || s2[index])
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}

void	typeord(char **a, int count, int max, int i)
{
	char	c[38];
	int		o;
	int		k;

	o = 1;
	k = 1;
	while (o <= max - i)
	{
		c[0] = '1';
		c[k++] = '0';
		c[k++] = '0';
		c[k++] = '0';
		c[k] = '\0';
		o++;
	}
	if (i != max)
	{
		validate_word(ft_atoi(a, count, c));
		write(1, " ", 1);
	}
}
