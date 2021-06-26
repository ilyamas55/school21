#include <unistd.h>
#include <stdio.h>

int ft_str_is_uppercase(char *str);
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
	char	r[] = {"DJFHBS"};
	printf("%d", ft_str_is_uppercase(r));
}
