
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *strrev(char *str)
{
        char *p1, *p2;

        if (! str || ! *str)
                return str;
        for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
        {
                *p1 ^= *p2;
                *p2 ^= *p1;
                *p1 ^= *p2;
        }
        return str;
}

int main() {
    char arr[100];
    strcpy(arr, "CheeseBurger");
    printf("Enter a string: ");
    fgets(arr, 100, stdin);
    int size = strlen(arr);
    char minChar = arr[0];
    char maxChar = arr[0];
    char vowelsCount = 0;
    char* ptr = arr + size - 2;
    printf("The result for (D): ");
    while (ptr != arr) {
        char lowerChar = tolower(*ptr);
        if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
            vowelsCount++;
        }
        if (*ptr < minChar) {
            minChar = *ptr;
        }
        if (*ptr > maxChar) {
            maxChar = *ptr;
        }
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n(C) Vowels count is %d\n", vowelsCount);
    printf("(A) The minimum char of ASCII is: '%c'\n", minChar);
    printf("(B) The maximum char of ASCII is: '%c'\n", maxChar);
    strrev(arr);
    printf("The result for (E): %s\n", arr);
    printf("The result for (F): ");
    ptr = arr;
    while (*ptr != '\0') {
        printf("%c", toupper(*ptr));
        ptr++;
    }
    return 0;
}
    