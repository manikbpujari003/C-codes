#include <stdio.h>

int main() {
    char capital_letter, small_letter;

    printf("Enter a capital letter: ");
    scanf("%c", &capital_letter);

    // Converting capital letter to small letter
    small_letter = capital_letter + 32;

    printf("The small letter equivalent is: %c\n", small_letter);

    return 0;
}
}
