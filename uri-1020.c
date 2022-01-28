#include <stdio.h>

int main()
{

    int age_day;

    // input
    scanf("%d", &age_day);

    // year calc
    int year = age_day / 365;
    int day_for_month = age_day % 365;

    // month calc
    int month = day_for_month / 30;
    int days = day_for_month % 30;

    // printing

    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", days);

    return 0;
}