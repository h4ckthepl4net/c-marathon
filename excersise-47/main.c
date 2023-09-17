
#include <stdio.h>
#include <string.h>

int main() {
    char arr[1000];
    printf("Enter string: ");
    scanf("%1000s", arr);
    strrev(arr);
    printf("Reversed string: %s\n", arr);
    return 0;
}
    