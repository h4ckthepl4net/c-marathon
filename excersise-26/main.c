
#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter numbers in this format \"A B C\": ");
    scanf("%d %d %d", &a, &b, &c);
    int gcd = 1;
    int min = a < b ? a < c ? a : c : b < c ? b : c;
    for (int i = min; i > 1; i--) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            gcd = i;
            break;
        }
    }
    printf("Greatest common divisor is %d\n", gcd);
    return 0;
}
    