
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <wctype.h>

int main() {
    char arr[100];
    char newArr[100];
    strcpy(arr, "Hello World");
    printf("Enter a string: ");
    fgets(arr, 100, stdin);
    int size = strlen(arr);
    int firstOIndex = -1;
    int lastOIndex = -1;
    char isPolindrome = 1;
    char spaceCount = 0;
    char containsWorld = 0;
    char upperCaseCount = 0;

    char containsAnythingBefore = 0;
    char containsUnusualChar = 0;
    char charsBeforeAt = 0;
    char containsAt = 0;
    char containsDot = 0;
    char domainCharsBeforeDot = 0;
    char domainCharsAfterDot = 0;

    char characters[255];
    char charactersCount = 0;

    char *newPtr = newArr;
    char *lastToken = arr;
    char **wordArr = NULL;
    char wordCount = 0;

    printf("(A) size is : %d\n", size);
    printf("(D) Full uppercase: ");

    for (int i = 0; i < size; i++) {
        char isDuplicate = 0;
        for (int j = 0; j < charactersCount; j++) {
            if (characters[j] == arr[i]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            characters[charactersCount++] = arr[i];
        }
        if (!containsUnusualChar && (!isprint(arr[i]) || !isalnum(arr[i]) && arr[i] != '@' && arr[i] != '.') && (arr[i] != ' ' || !containsAnythingBefore)) {
            containsUnusualChar = 1;
        }
        if (!containsUnusualChar) {
            if (arr[i] == '@' && !containsAt) {
                containsAt = 1;
            } else if (arr[i] == '@' && containsAt) {
                containsUnusualChar = 1;
            }
            if (arr[i] == '.' && containsAt && !containsDot) {
                containsDot = 1;
            } else if (arr[i] == '.' && !containsAt) {
                containsUnusualChar = 1;
            }
            if (isprint(arr[i]) && (isalnum(arr[i]) || arr[i] == '.') && !containsAt) {
                charsBeforeAt++;
            }
            if (arr[i] == '.' && containsAt && !containsDot) {
                domainCharsBeforeDot++;
            } else if (arr[i] == '.' && containsAt && containsDot) {
                containsUnusualChar = 1;
            }
            if (containsAt && containsDot && isalnum(arr[i])) {
                domainCharsAfterDot++;
            } else if (containsAt && containsDot && !isalnum(arr[i])) {
                containsUnusualChar = 1;
            }
        }
        if (!iswspace(arr[i]) && !containsAnythingBefore) {
            containsAnythingBefore = 1;
        }
        if (isalnum(arr[i]) || arr[i] == ' ') {
            *newPtr = arr[i];
            newPtr++;
        }
        if (arr[i] == 'o' || arr[i] == 'O') {
            if (firstOIndex == -1) {
                firstOIndex = i;
            }
            lastOIndex = i;
        }
        if (arr[i] == ' ') {
            spaceCount++;
        }
        if (arr[i] == 'W' && arr[i + 1] == 'o' && arr[i + 2] == 'r' && arr[i + 3] == 'l' && arr[i + 4] == 'd') {
            containsWorld = 1;
        }
        if (isupper(arr[i])) {
            upperCaseCount++;
        }
        if (arr[i] != arr[size - i - 2] && isPolindrome && i <= size / 2) {
            isPolindrome = 0;
        }
        printf("%c", toupper(arr[i]));
        if (iswspace(arr[i])) {
            wordCount++;
            wordArr = realloc(wordArr, wordCount * sizeof(char));
            wordArr[wordCount - 1] = malloc((arr + i - lastToken) * sizeof(char));
            strncpy(wordArr[wordCount - 1], lastToken, arr + i - lastToken);
            lastToken = arr + i + 1;
        }
    }
    printf("\n");

    printf("(B) First 'o' index is: %d\n", firstOIndex);
    printf("(C) 'l's replaced by 'z's: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] == 'l') {
            printf("z");
        } else {
            printf("%c", arr[i]);
        }
    }
    printf("\n");
    printf("(E) is %s a polindrome\n", isPolindrome ? "" : "not");
    printf("(F) contains %d spaces\n", spaceCount);
    printf("(G) %s 'World'\n", containsWorld ? "contains" : "doesn't contain");
    printf("(H) without special chars: %s\n", newArr);
    printf("(I) %s valid email\n", !containsUnusualChar && containsAt && containsDot && charsBeforeAt > 0 && domainCharsBeforeDot > 1 && domainCharsAfterDot > 1 ? "Yes" : "No");
    printf("(M) contains %d upper case chars\n", upperCaseCount);
    printf("(K) words are: ");
    for(int i = 0; i < wordCount; i++) {
        printf("%s, ", wordArr[i]);
    }
    printf("\n");

    printf("(N) changed all '||' to 'rr': ");
    for (int i = 0; i < size; i++) {
        if (arr[i] == '|' && arr[i + 1] == '|') {
            printf("rr");
            i += 1;
        } else {
            printf("%c", arr[i]);
        }
    }
    printf("\n");

    printf("(L) Encoded by 3 chars: ");
    for (int i = 0; i < size; i++) {
        printf("%c", arr[i] + 3);
    }
    printf("\n");

    printf("(J) Last 'o' index is: %d\n", lastOIndex);
    printf("(O) string without duplicates: %s\n", characters);
    return 0;
}
    