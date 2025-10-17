#include <stdio.h>
#include <stddef.h>

/**
 * Function to find the first occurrence of a substring within a string
 * @param haystack
 * @param needle
 * @return pointer to haystack positon or NULL
 */
char *ft_substr(const char *haystack, const char *needle) {

    if (*needle == '\0')
        return (char *)haystack;

    // Calculating needle length
    const char *p = needle;
    while (*p) p++;
    const int needle_len = (int)(p - needle);

    while (*haystack)
    {
        const char *haystack_pos = haystack;
        const char *needle_pos = needle;

        // Compare characters from haystack and needle while not reaching the end of given strings
        while (*haystack_pos && *needle_pos && *haystack_pos == *needle_pos) {
            haystack_pos++;
            needle_pos++;
        }

        // If the entire needle was matched, return the pointer where the match occurred, imo this is fucking brilliant!
        if (*needle_pos == '\0') {
            return (char *)haystack;
        }

        haystack++;

        // If remaining characters in haystack are fewer than the needle length, break early, this will save us from useless loops
        if (needle_len > 0 && !*haystack) {
            break;
        }
    }

    return NULL;
}

int main(void) {
    const char *haystack = "hello world";
    const char *needle = "o w";

    char *result = ft_substr(haystack, needle);

    if (result) {
        printf("Found: %s\n", result);
    } else {
        printf("Not found\n");
    }

    return 0;
}
