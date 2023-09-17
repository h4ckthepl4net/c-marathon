
#include <stdio.h>
const int UPPERCASE_LOWERCASE_DIFFERENCE = 32;

int main() {
    char i;
    printf("Please enter a latin uppercase character: ");
    scanf("%c", &i);
    if (i >= 'A' && i <= 'Z')
        printf("lowercase for this letter is %c\n", i + UPPERCASE_LOWERCASE_DIFFERENCE);
    else
        printf("You did not enter a latin uppercase character\n");
    return 0;
}
    