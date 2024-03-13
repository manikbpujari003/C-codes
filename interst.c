#include <stdio.h>

int main() {
    float principle = 1000, rate = 5, time = 2;
    float simpleInterest = (principle * rate * time) / 100;
    printf("Simple interest: %.2f\n", simpleInterest);
    return 0;
}
