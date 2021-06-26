#include <unistd.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);
void ft_putstr(char *str)
{
	int i = 0;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}

int main(void)
{
	char	r[] = {"hello"};
	char	t[5];
	/*char	*s;*/
	char	*p;

	p = ft_strcpy(t, r);
	/*s = strcpy(t, r);*/
	ft_putstr(p);
	/*ft_putstr(s);*/
}
