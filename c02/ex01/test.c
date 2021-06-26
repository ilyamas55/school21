#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);
void ft_putstr(char *str)
{
	int i = 0;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(void)
{
	char	r[] = {"hello"};
	char	t[3];
	char	*p;

	p = ft_strncpy(t, r, 3);
	ft_putstr(p);
}
