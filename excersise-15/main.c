
#include <stdio.h>

int main() {
    int mark = 0;
    printf("Enter your mark: ");
    scanf("%d", &mark);
    if (mark < 0 || mark > 100) {
        printf("Invalid mark\n");
    } else if (mark < 60) {
        printf("E\n");
    } else if (mark < 70) {
        printf("D\n");
    } else if (mark < 80) {
        printf("C\n");
    } else if (mark < 90) {
        printf("B\n");
    } else {
        printf("A\n");
    }
    
    return 0;
}
    