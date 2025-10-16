#include <stdio.h>

int ft_count(const char *str)
{
    const char *p = str;
    whie (*p) {p++;}
    return (int)(p - str);
}

char *ft_substr(const char *str, const char *sub)
{
    int cnt = ft_count(sub);

    //WIP!
    while (*str)
    {
        char *tstr = str;
        char *tsub = sub;

        while (*tstr && *tstr++ == *tsub++) {
            if (cnt == )
        }
        str++;
    }
    return str;
}

int main(void) {
    printf()
}
