#include <stdio.h>

int	ft_isalpha(char *s)
{
	while(*s)
	{
		if (*s < 'a' && *s > 'z' || *s < 'A' && *s > 'Z')
			return (0);
		s++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_isalpha("Hello"));
        printf("%d\n", ft_isalpha("45"));
        printf("%d\n", ft_isalpha("World"));
}
