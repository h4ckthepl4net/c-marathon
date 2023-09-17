
#include <stdio.h>

int main() {
    char a = 0;
    char b = 0;
    // print thruth table for  !(A && B) || A && !B || A
    printf("A\tB\t!(A && B) || A && !B || A\n");
    printf("%d\t%d\t%d\n", a, b, !(a && b) || a && !b || a);
    b = 1;
    printf("%d\t%d\t%d\n", a, b, !(a && b) || a && !b || a);
    a = 1;
    b = 0;
    printf("%d\t%d\t%d\n", a, b, !(a && b) || a && !b || a);
    b = 1;
    printf("%d\t%d\t%d\n", a, b, !(a && b) || a && !b || a);
    return 0;
}
    