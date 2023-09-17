
#include <stdio.h>

int main() {
    printf("Enter the temperature in Celsius: ");
    float celsius;
    scanf("%f", &celsius);
    printf("The temperature in Fahrenheit is: %f\n", celsius * 9 / 5 + 32);
    return 0;
}
    