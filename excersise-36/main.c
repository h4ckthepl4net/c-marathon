
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter numbers in this format \"A B\": ");
    scanf("%d %d", &a, &b);
    long long int sum = 0;
    int min = a < b ? a : b;
    int max = a > b ? a : b;
    while (min <= max) {
        if (!(min & 1)) {
            sum += min;
        }
        min++;
    }
    return 0;
}
    