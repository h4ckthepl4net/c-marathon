
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter the string: ");
    fgets(str, 1000, stdin);
    char* ptr = str;
    while (*ptr != '\0') {
        *ptr = toupper(*ptr);
        ptr++;
    }
    printf("The string in uppercase is: %s\n", str);
    return 0;
}
    