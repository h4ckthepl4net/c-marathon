
#include <stdio.h>

int main() {
    char txt[5000];
    gets_s(txt, 5000);
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
    