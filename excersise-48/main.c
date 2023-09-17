
#include <stdio.h>

int main() {
    char arr[1000];
    printf("Enter string: ");
    scanf("%1000s", arr);
    char *p = arr;
    int count = 0;
    while (*p != '\0') {
        p++;
    }
    printf("String length: %d\n", count);
    return 0;
}
    