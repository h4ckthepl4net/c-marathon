
#include <stdio.h>

void strcpy(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char str1[100];
    char str2[100] = "Hello";
    strcpy(str1, str2);
    printf("%s", str1);
    return 0;
}
    