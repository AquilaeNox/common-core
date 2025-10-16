char *ft_strlcat(char *dest, const char *src)
{
    char    *p = dest;
    while (*p) {p++;}
    while (*src) {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}

/**
#include <stdio.h>

int main(void) {
    char str[100] = "hello";
    printf("%s\n", str);
    ft_strlcat(str, " world");
    printf("%s\n", str);
}
*/