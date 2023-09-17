
#include <stdio.h>

int main() {
    char spacesRemoved[1000];
    char arr[1000];
    printf("Enter string: ");
    fgets(arr, 1000, stdin);
    char *p = arr;
    char *q = spacesRemoved;
    while (*p != '\0') {
        if (*p != ' ') {
            *q = *p;
            q++;
        }
        p++;
    }
    *q = '\0';
    printf("String with spaces removed: %s\n", spacesRemoved);
    return 0;
}
    