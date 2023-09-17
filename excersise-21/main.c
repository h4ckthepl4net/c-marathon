
#include <stdio.h>

int main() {
    char p;
    printf("Enter a char: ");
    scanf("%c", &p);


    if (isalpha(p)) {
        if (p == 'A' || p == 'E' || p == 'I' || p == 'O' || p == 'V' || p == 'Y')
            printf("%c is a vowel\n", p);
        else
            printf("%c is a consonant\n", p);
    } else {
        printf("Not a letter\n");
    }
    return 0;
}
    