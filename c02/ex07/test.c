#include <unistd.h>
#include <stdio.h>

int ft_strupcase(char *str);
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
	char	r[] = {"sdfsdf123z`"};
	printf("%d", ft_strupcase(r));
	ft_putstr(r);
}
