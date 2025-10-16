char	*ft_strcpy(char *dest, char *src)
{
	char *t = dest;
	while (*src)
		*t++ = *src++;
	*t = '\0';

	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	dest[100];
	ft_strcpy(dest, "Hello World");
	printf("%s", dest);
}
*/