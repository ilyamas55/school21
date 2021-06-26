#include <unistd.h>
#include <stdio.h>

char *ft_strlcat(char *dest, char *src, unsigned int size);
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
	char	s11[] = {"1234"};
	char	s22[] = {"asdqwe"};
	/*printf("%s", ft_strncat(s11, s22, 6));*/
	ft_putstr(ft_strlcat(s11, s22, 3));
}
