#include <stdio.h>

int main() {
    int num = 12345, reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    printf("Reversed number: %d\n", reversedNum);
    return 0;
}
