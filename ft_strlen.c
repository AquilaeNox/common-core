int	ft_strlen(char	*s)
{
	int	c;

	c = 0;
	while (*s)
	{
		c++;
		s++;
	}

	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*s = "Hello World";
	printf("%d", ft_strlen(s));
	return 0;
}
*/