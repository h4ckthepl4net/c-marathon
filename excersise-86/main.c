
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int * ptr1 = &a;
    int * ptr2 = &b;
    printf("a + b = %d\n", *ptr1 + *ptr2);
    printf("a - b = %d\n", *ptr1 - *ptr2);
    printf("a * b = %d\n", *ptr1 * *ptr2);
    printf("a / b = %d\n", *ptr1 / *ptr2);
    return 0;
}
    