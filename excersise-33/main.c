
#include <stdio.h>
#include <string.h>

int main() {
    char string[20];
    float a;
    printf("Enter number: ");
    scanf("%f", &a);
    itoa(a);
    char *p = string;
    int sum = 0;
    while (*p != '\0') {
        if(isdigit(*p)) {
            sum += *p - '0';
        }
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}
    