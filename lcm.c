#include <stdio.h>

int main() {
    int num1 = 12, num2 = 18, lcm;
    int max = (num1 > num2) ? num1 : num2;
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        max++;
    }
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    return 0;
}
