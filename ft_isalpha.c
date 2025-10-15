int	ft_isalpha(char *s)
{
	while(*s)
	{
		if (!(*s >= 'a' && *s <= 'z' || *s >= 'A' && *s <= 'Z'))
			return 0;
		s++;
	}
	return 1;
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalpha("Hello"));
    printf("%d\n", ft_isalpha("45"));
	printf("%d\n", ft_isalpha("World"));
	printf("%d\n", ft_isalpha("!"));
	printf("%d\n", ft_isalpha("_~"));
	printf("%d\n", ft_isalpha("g"));
}
*/