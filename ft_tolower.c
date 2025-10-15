void    ft_tolower(char *str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z')
            *str += 32;
        str++;
    }
}

/**
#include <stdio.h>

int	main(void) {
    char str[100] = "Hello World";
    printf("%s\n", str);
    ft_tolower(str);
    printf("%s\n", str);
}
*/