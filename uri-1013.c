#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c, max_ab, max;
    scanf("%d %d %d", &a, &b, &c);

    max_ab = ((a + b) + abs(a - b)) / 2;
    max = ((max_ab + c) + abs(max_ab - c)) / 2;

    printf("%d eh o maior\n", max);

    return 0;
}