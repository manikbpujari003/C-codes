#include <stdio.h>

int main() {
    char operator;
    float num1, num2;
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    switch (operator) {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            printf("Result: %.2f\n", num1 / num2);
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}
