
#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("Enter numbers in this format \"A B C D\": ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a + b + c + d == 0) {
        int min;
        if(a < b && a < c && a < d) {
            min = a;
        } else if (b < c && b < d) {
            min = b;
        } else if (c < d) {
            min = c;
        } else {
            min = d;
        }
        printf("Min is %d\n", min);
    } else {
        printf("Sum of all numbers is not 0\n");
    }
    return 0;
}
    