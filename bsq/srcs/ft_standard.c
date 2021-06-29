#include "ft_bsq.h"

int	ft_concat(char **dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while ((*dest)[i])
		i++;
	j = 0;
	while (src[j])
		(*dest)[i++] = src[j++];
	(*dest)[i] = '\0';
	return (j);
}

char	*ft_read_from_screen(void)
{
	int		size;
	int		size_temp;
	char	*buf;
	char	*str;

	buf = malloc(sizeof(char) * BUF_SIZE + 1);
	str = malloc(sizeof(char) * BUF_SIZE + 1);
	buf[0] = '\0';
	size_temp = read(0, str, BUF_SIZE);
	str[size_temp] = '\0';
	size = 0;
	while (size_temp > 0)
	{
		str[size_temp] = '\0';
		size = size + ft_concat(&buf, str);
		size_temp = read(0, str, BUF_SIZE);
	}
	free(str);
	if (size == 0)
	{
		free(buf);
		return (NULL);
	}
	buf[size] = '\0';
	return (buf);
}

char	*ft_get_buf_standard(void)
{
	char	*buf;

	buf = ft_read_from_screen();
	if (!buf)
		return (NULL);
	if (ft_check_first_line(buf) != -1)
		return (buf);
	free(buf);
	return (NULL);
}

char	*ft_get_buf_file(char *path)
{
	char	*buf;
	int		buf_size;

	buf = ft_get_buf(path, BUF_SIZE);
	if (!buf)
		return (NULL);
	buf_size = ft_check_first_line(buf);
	if (buf_size == -1)
	{
		free(buf);
		return (NULL);
	}
	else
	{
		free(buf);
		buf = ft_get_buf(path, buf_size);
		return (buf);
	}
}
