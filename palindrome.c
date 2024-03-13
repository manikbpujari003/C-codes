#include <stdio.h>

int main() {
    int num = 12321, originalNum, reversedNum = 0;
    originalNum = num;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }
    return 0;
}
