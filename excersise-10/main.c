
#include <stdio.h>

int main() {
    char i;
    printf("Please enter a character: ");
    scanf("%c", &i);
    if (i >= '0' && i <= '9')
        printf("true");
    else
        printf("false");
    return 0;
}
    