#include <stdio.h>

int factorial(int n) {
    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

int main() {
    int rows = 5;
    for (int i = 0; i < rows; i++) {
        for (int j =0; j <= i; j++) {
            printf("%d ", factorial(i) / (factorial(j) * factorial(i - j)));
        }
        printf("\n");
    }
    return 0;
}

