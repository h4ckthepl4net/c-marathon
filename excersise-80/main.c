
#include <stdio.h>

int main() {
    char *ptr = "Hello World";
    char **ptr2 = &ptr;
    char ***ptr3 = &ptr2;
    printf("%p %p %p\n", ptr, ptr2, ptr3);
    return 0;
}
    