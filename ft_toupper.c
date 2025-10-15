void    ft_toupper(char *s) {
    while (*s) {
        if (*s >= 'a' && *s <= 'z')
            *s -= 32;
        s++;
    }
}

/**
#include <stdio.h>

int main(void) {
    char    str[100] = "hello world";
    printf("%s\n", str);
    ft_toupper(str);
    printf("%s", str);
    return 0;
}
*/