int	ft_strlen(const char	*s)
{
    const char *p = s;
	while (*p){p++;}
	return (int)(p - s);
}

/*
#include <stdio.h>

int	main(void)
{
	char *s  = "Hello World!";
	char *si = "Saying Hello!";
	printf("%d\n", ft_strlen(s));
	printf("%d\n", ft_strlen(si));
	return 0;
}
*/