#include <stdio.h>

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

int find_gcd(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = gcd(arr[i], result);
        if (result == 1) {
            return 1;
        }
    }
    return result;
}

int main() {
    int n;
    printf("Enter the number of elements in the stream: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the stream of numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_divisor = find_gcd(arr, n);
    printf("The maximum number that divides all the stream of numbers is: %d\n", max_divisor);

    return 0;
}
