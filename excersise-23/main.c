
#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter numbers in this format \"A B C\": ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b || b == c || a == c) {
        printf("Max is %d\n", a > b ? a > c ? a : c : b > c ? b : c);
    } else {
        printf("All numbers are different\n");
    }
    return 0;
}
    