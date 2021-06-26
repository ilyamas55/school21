#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);
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
	char	s11[] = {"123456789"};
	char	s22[] = {"123450789"};
	printf("%d", ft_strncmp(s11, s22, 6));
}
