#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);
void	ft_putstr(char *str)
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
	char	s11[] = {"12"};
	char	s22[] = {"sdf"};
	printf("%s", ft_strcat(s11, s22));
	ft_putstr(strcat(s11,s22));
}
