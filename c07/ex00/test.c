#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int main(void)
{
	char	str[11] = "0123456789";
	char	*istr;

	istr = ft_strdup(str);
	printf("%s\n", istr);
	free(istr);
	return (0);
}
