
#include <stdio.h>
#include <limits.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int bit0s, bit1s;
    bit0s = bit1s = 0;
    for (int i = 0; i < sizeof(num) * CHAR_BIT; i++) {
        if (num & 1) {
            bit1s++;
        } else {
            bit0s++;
        }
        num >>= 1;
    }
    return 0;
}
    