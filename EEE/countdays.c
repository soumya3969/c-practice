#include <stdio.h>

void convertDays(int totalDays, int *years, int *months, int *weeks, int *days) {
    *years = totalDays / 365;
    *months = (totalDays % 365) / 30;
    *weeks = ((totalDays % 365) % 30) / 7;
    *days = ((totalDays % 365) % 30) % 7;
}

int main() {
    int totalDays, years, months, weeks, days;

    printf("Enter the total number of days: ");
    scanf("%d", &totalDays);

    convertDays(totalDays, &years, &months, &weeks, &days);

    printf("%d days is equal to:\n", totalDays);
    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}
