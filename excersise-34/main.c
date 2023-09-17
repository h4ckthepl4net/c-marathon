
#include <stdio.h>

int main() {
    int edge;
    printf("Enter the edge of the sequence: ");
    scanf("%d", &edge);
    int a = 0, b = 1, c;
    do {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    } while (c < edge);
    return 0;
}
    