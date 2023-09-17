
#include <stdio.h>

int main() {
    int num, shift;
    printf("Enter number and shift in this format \"[number] [left shift]\"");
    scanf("%d %d", &num, &shift);
    printf("Left shift result is: %d\n", num << shift);
    return 0;
}
    