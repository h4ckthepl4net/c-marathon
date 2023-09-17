
#include <stdio.h>

int strlen(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main() {
    printf("%d", strlen("Hello"));
    return 0;
}
    