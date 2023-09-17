#include <stdio.h>

int main() {
    int num1, num2;
    while (1) {
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        printf("Enter the operator (+, -, *, /): ");
        char op;
        scanf(" %c", &op);
        if (op != '+' || op != '-' || op != '*' || op != '/') {
            printf("Invalid operator");
        } else {
            switch (op) {
                case '+':
                    printf("%d + %d = %d", num1, num2, num1 + num2);
                    break;
                case '-':
                    printf("%d - %d = %d", num1, num2, num1 - num2);
                    break;
                case '*':
                    printf("%d * %d = %d", num1, num2, num1 * num2);
                    break;
                case '/':
                    printf("%d / %d = %d", num1, num2, num1 / num2);
                    break;
            }
        }
        char choice;
        printf("Press 'Q'/'q' to quit or any other key to continue: ");
        scanf(" %c", &choice);
        if (choice == 'Q' || choice == 'q') {
            break;
        }
    }
    return 0;
}
    