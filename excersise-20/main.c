
#include <stdio.h>

int main() {
    printf("Enter integer to check: ");
    int a;
    scanf("%d", &a);
    printf("%d is %s\n", a, a % 2 == 0 ? "even" : "odd");
    return 0;
}
    