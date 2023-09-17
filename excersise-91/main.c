
#include <stdio.h>

char* strchr(const char *str, char c) {
    while (*str != '\0') {
        if (*str == c) {
            return str;
        }
        str++;
    }
    return NULL;
}

int main() {
    printf("%s", strchr("Hello", 'l'));
    return 0;
}
    