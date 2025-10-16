int ft_isascii(const char c)
{
    if (c >= 0 && c <= 127)
        return 1;
    return 0;
}

/*
#include <stdio.h>

int main(void) {
    printf("%d\n", ft_isascii('H'));
    printf("%d\n", ft_isascii('e'));
    printf("%d\n", ft_isascii('l'));
    printf("%d\n", ft_isascii('l'));
    printf("%d\n", ft_isascii('o'));
    printf("%d\n", ft_isascii('\n'));
    printf("%d\n", ft_isascii('W'));
    printf("%d\n", ft_isascii('o'));
    printf("%d\n", ft_isascii('r'));
    printf("%d\n", ft_isascii('l'));
    printf("%d\n", ft_isascii('d'));
    printf("%d\n", ft_isascii('$'));
    printf("%d\n", ft_isascii('&'));
    printf("%d\n", ft_isascii('@'));
    printf("%d\n", ft_isascii('€'));
    printf("%d\n", ft_isascii(127));
    printf("%d\n", ft_isascii('\0'));
}
*/