#include <stdio.h>

int main() {
    int num1 = 5, num2 = 7, num3 = 9;
    int max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    printf("Maximum: %d\n", max);
    return 0;
}
