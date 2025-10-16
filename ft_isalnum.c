int ft_isalnum(char c)
{
    if (c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

/*
#include <stdio.h>

int main(void) {
    printf("%d\n", ft_isalnum('a'));
    printf("%d\n", ft_isalnum('A'));
    printf("%d\n", ft_isalnum('\n'));
    printf("%d\n", ft_isalnum('g'));
    printf("%d\n", ft_isalnum('2'));
    printf("%d\n", ft_isalnum('0'));
    printf("%d\n", ft_isalnum(' '));
    printf("%d\n", ft_isalnum('_'));
}
*/