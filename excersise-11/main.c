
#include <stdio.h>

int main() {
    char txt[5000];
    fgets(txt, 5000, stdin);
    char* p = txt;
    int vowels = 0;
    int consonants = 0;
    while (*p != '\0') {
        if (isalpha(*p)) {
            if (*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'V' || *p == 'Y')
                vowels++;
            else
                consonants++;
        }
    }
    printf("vowels: %d\n", vowels);
    printf("consonants: %d\n", consonants);
    return 0;
}
    