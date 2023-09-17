
#include <stdio.h>
#include <ctype.h>

int main() {
    char a,b;
    printf("Enter two characters in this format \"A B\": ");
    scanf("%c %c", &a, &b);
    if (isalpha(a) == 0 || isalpha(b) == 0) {
        printf("One of the characters is not a letter\n");
        return 0;
    }
    if (a - b == 32 || b - a == 32) {
        printf("Characters are the same\n");
    } else {
        printf("Characters are different\n");
    }
    return 0;
}
    