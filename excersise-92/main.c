
#include <stdio.h>

char* strcat(char *dest, const char *src) {
    char *ptr = dest;
    while (*ptr != '\0') {
        ptr++;
    }
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}

int main() {
    char str1[100] = "Hello";
    char str2[100] = " World";
    printf("%s", strcat(str1, str2));
    return 0;
}
    