
#include <stdio.h>
#include <math.h>

int main() {
    float num;
    printf("Enter the number: ");
    scanf("%f", &num);
    int sqrt_num = (int) sqrt(num);
    printf("The square root of %f is %d\n", num, sqrt_num);
    return 0;
}
    