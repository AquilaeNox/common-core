void ft_bzero(void *s, size_t n)
{
    unsigned char *p = s;
    while (n--)
        *p++ = 0;
}

/*
#include <stddef.h>
#include <stdio.h>

int main(void)
{
    char s[13] = "Hello World!";
    printf("%s\n", s);
    ft_bzero(&s, 10);
    printf("%s\n", s);
}
*/