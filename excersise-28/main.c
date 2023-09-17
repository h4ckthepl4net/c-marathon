
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter numbers in this format \"A B\": ");
    scanf("%d %d", &a, &b);
    if (a % b == 0 || b % a == 0) {
        printf("One of the numbers is a multiple of the other\n");
    } else {
        printf("None of the numbers is a multiple of the other\n");
    }
    return 0;
}
    