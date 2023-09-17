
#include <stdio.h>

int main() {
    int a;
    printf("Enter the year to check: ");
    scanf("%d", &a);
    printf("%d is %s\n", a, a % 4 == 0 ? "leap" : "not leap");
    return 0;
}
    