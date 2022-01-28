#include <stdio.h>

int main()
{

    int time_in_sec;

    // input

    scanf("%d", &time_in_sec);

    // hour calc
    int hour = time_in_sec / 3600;
    int sec_for_min = time_in_sec % 3600;

    // min calc
    int min = sec_for_min / 60;
    int sec_for_sec = sec_for_min % 60;

    printf("%d:%d:%d\n", hour, min, sec_for_sec);

    return 0;
}