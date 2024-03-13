#include <stdio.h>

int main() {
    int arr[100], n, i;
    int smallest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element as the smallest
    smallest = arr[0];

    // Traverse the array to find the smallest element
    for (i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}
