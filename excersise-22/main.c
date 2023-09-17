
#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    printf("Enter numbers in this format \"A B\": ");
    scanf("%d %d", &a, &b);
    printf("Max is %d\n", a > b ? a : b);
    return 0;
}
    