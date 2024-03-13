#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element as the largest
    largest = arr[0];

    // Traverse the array to find the largest element
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest number in the array is: %d\n", largest);

    return 0;
}
