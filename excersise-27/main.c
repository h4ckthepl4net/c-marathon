
#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if (!(num & 0b10000)) {
        int mask = 0b10000;
        printf("Result: %d\n", num | mask);
    } else {
        printf("Result: %d\n", num);
    }

    return 0;
}
    