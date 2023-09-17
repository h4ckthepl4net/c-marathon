
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char str[1000];
    printf("Enter the string: ");
    fgets(str, 1000, stdin);
    char* lastToken = str;
    char* ptr = str;
    char hasAlpha = 0;
    while (*ptr != '\0') {
        if (!hasAlpha && isalpha(*ptr)) {
            hasAlpha = 1;
        }
        if (*ptr == ' ') {
            *ptr = '\0';
            if (!hasAlpha) {
                int num = atoi(lastToken);
                printf("%d\n", num);
            }
            hasAlpha = 0;
            lastToken = ptr + 1;
        }
        ptr++;
    }
    return 0;
}
    