
#include <stdio.h>

int const NEEDED_HEIGHT = 150;

int main() {
    int height = 0;
    printf("Enter your height: ");
    scanf("%d", &height);
    if (height < NEEDED_HEIGHT) {
        printf("Neroghutyun, duq cheq hamapatasxanum\n");
    } else {
        printf("Duq hamapatasxanum eq\n");
    }
    return 0;
}
    