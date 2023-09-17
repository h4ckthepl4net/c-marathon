
#include <stdio.h>

int main() {
    char arr[1000];
    printf("Enter the string: ");
    fgets(arr, 1000, stdin);
    char* ptr = arr;
    char characters[255];
    int chars = 0;
    while(*ptr != '\0') {
        char exists = 0;
        for (int i = 0; i < chars; i++) {
            if (characters[i] == *ptr) {
                exists = 1;
                break;
            }
        }
        if (!exists) {
            characters[chars] = *ptr;
            chars++;
        }
        ptr++;
    }
    characters[chars] = '\0';
    printf("The string without repeating characters is: %s\n", characters);
    return 0;
}
    