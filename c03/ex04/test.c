#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);
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
	char	s11[] = {"12345634"};
	char	s22[] = {"34"};
	/*printf("%s", ft_strncat(s11, s22, 6));*/
	ft_putstr(ft_strstr(s11, s22));
	printf("\n");
	ft_putstr(strstr(s11, s22));
}
