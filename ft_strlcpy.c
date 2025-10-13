#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*src)
		*tmp++ = *src++;
	*tmp = '\0';

	return (dest);
}

int	main(void)
{
	char	dest[100];
	ft_strcpy(dest, "Hello World");
	printf("%s", dest);
}
