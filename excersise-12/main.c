
#include <stdio.h>
#include <string.h>

int main() {
    char txt[5000];
    fgets(txt, 5000, stdin);
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
