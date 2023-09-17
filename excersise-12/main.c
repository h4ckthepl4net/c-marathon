
#include <stdio.h>
#include <string.h>

int main() {
    char txt[5000];
    gets_s(txt, 5000);
    int length = strlen(txt);
    for (int i = 0; i < length / 2; i++) {
        if (txt[i] != txt[length - i - 1]) {
            printf("false");
            return 0;
        }
    }
    printf("true");
    return 0;
}
