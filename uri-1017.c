#include <stdio.h>

int main()
{

    int time_of_travel, avg_speed, total_distance;

    // input
    scanf("%d %d", &time_of_travel, &avg_speed);

    total_distance = time_of_travel * avg_speed;

    printf("%0.3f\n", (float)total_distance / 12);

    return 0;
}