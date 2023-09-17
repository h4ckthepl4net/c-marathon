
#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 0) {
        printf("Der cheq cnvel :)\n");
    } else if (age < 18) {
        printf("Duq anchapahas eq\n");
    } else if (age < 65) {
        printf("Duq chapahas eq\n");
    } else {
        printf("Duq erkarakyac eq :)\n");
    }
    return 0;
}
    