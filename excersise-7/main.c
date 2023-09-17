
#include <stdio.h>

int main() {
    float x = 0;
    printf("Please enter X:");
    scanf("%f", &x);
    printf("calculated: %f\n", x / (5+2)+30*x-51);
    return 0;
}
