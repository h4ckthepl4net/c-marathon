
#include <stdio.h>

int main() {
    int x = 0;
    int y = 0;
    printf("Please enter X and Y separated by a space: ");
    scanf("%d %d", &x, &y);
    printf("calculated %f\n", (x * y + 21 * x / y - 200));
    return 0;
}
