#include <stdio.h>

int	ft_isdigit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}


int	main(void)
{
	printf("%d\n", ft_isdigit("23434"));
	printf("%d\n", ft_isdigit("sd324"));
	printf("%d\n", ft_isdigit("s"));
	return (0);
}
