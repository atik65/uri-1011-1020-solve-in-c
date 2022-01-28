#include <stdio.h>

int main()
{

    int total_distance;
    float total_fuel;

    // input
    scanf("%d %f", &total_distance, &total_fuel);

    printf("%0.3f km/l\n", total_distance / total_fuel);

    return 0;
}