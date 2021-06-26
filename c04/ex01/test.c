#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *src);

int main(void)
{
	char	s11[] = {"1234"};
	/*printf("%s", ft_strncat(s11, s22, 6));*/
	ft_putstr(s11);
}
