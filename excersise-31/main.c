
#include <stdio.h>

int main() {
    for (int i = 0; i <= 100; i++) {
        if (i & 1) {
            printf("%d", i);
        }
    }
    return 0;
}
