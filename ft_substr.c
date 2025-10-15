#include <string.h>

char *ft_substr(const char *str, const char *sub) {
    while (*str) {
        char *tstr = str;
        char *tsub = sub;

        while (*tsub && *tstr == *tsub) {
            tsub++;
            tstr++;
        }
        str++;
    }
    return str;
}

int main(void) {

}
