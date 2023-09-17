
#include <stdio.h>
#include <string.h>

int main() {
    char string[20];
    int a;
    printf("Enter integer: ");
    scanf("%d", &a);
    if (a > 12) {
        itoa(a);
        strrev(string);
        printf("%s\n", string);
    } else {
        printf("%d is less than 12", a);
    }

    return 0;
}
    