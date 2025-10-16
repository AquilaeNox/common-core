int ft_isprint(const char c)
{
    if (c >= 32 && c <= 126)
        return 1;
    return 0;
}

/*
#include <stdio.h>

int main(void) {
    printf("%d\n", ft_isprint('H'));
    printf("%d\n", ft_isprint('e'));
    printf("%d\n", ft_isprint('l'));
    printf("%d\n", ft_isprint('l'));
    printf("%d\n", ft_isprint('o'));
    printf("%d\n", ft_isprint('\n'));
    printf("%d\n", ft_isprint('W'));
    printf("%d\n", ft_isprint('o'));
    printf("%d\n", ft_isprint('r'));
    printf("%d\n", ft_isprint('l'));
    printf("%d\n", ft_isprint('d'));
    printf("%d\n", ft_isprint('\0'));
}
*/