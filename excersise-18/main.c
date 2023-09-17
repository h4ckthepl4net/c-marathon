
#include <stdio.h>

int main() {
    char a = 0;
    char b = 0;
    printf("A\tB\tA || B && !(B || A)\n");
    printf("%d\t%d\t%d\n", a, b, a || b && !(b || a));
    b = 1;
    printf("%d\t%d\t%d\n", a, b, a || b && !(b || a));
    a = 1;
    b = 0;
    printf("%d\t%d\t%d\n", a, b, a || b && !(b || a));
    b = 1;
    printf("%d\t%d\t%d\n", a, b, a || b && !(b || a));
    return 0;
}
    