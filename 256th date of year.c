
#include <stdio.h>

int main() {
    int year, day, month;
    printf("Enter a year: ");
    scanf("%d", &year);

    int days_in_feb;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        days_in_feb = 29;
    } else {
        days_in_feb = 28;
    }

    int days_in_month[] = {31, days_in_feb, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days_so_far = 0;
    for (int i = 0; i < 12; i++) {
        if (days_so_far + days_in_month[i] >= 256) {
            month = i + 1;
            day = 256 - days_so_far;
            break;
        }
        days_so_far += days_in_month[i];
    }

    printf("%02d.%02d.%d\n", day, month, year);

    return 0;
}
