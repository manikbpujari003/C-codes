#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Convert Celsius to Kelvin
    kelvin = celsius + 273.15;

    // Display the results
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    printf("Temperature in Kelvin: %.2f\n", kelvin);

    return 0;
}
