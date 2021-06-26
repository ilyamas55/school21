#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);
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
	char	s11[] = {"he"};
	char	s22[] = {"hel"};
	printf("%d", ft_strcmp(s11, s22));
}
