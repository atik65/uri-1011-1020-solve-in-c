#include <stdio.h>

int main()
{

    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);

    // calculating the area of a triangle
    float triangle_area = 0.5 * A * C;

    // calulating the area of circle
    float circle_area = 3.14159 * C * C;

    // calulating the area of trapezium
    float trapezium_area = 0.5 * (A + B) * C;

    // calculating the area of square
    float square_area = B * B;

    // calculating the area of rectangle
    float rectangle_area = A * B;

    // printing the are vlaues
    printf("TRIANGULO: %0.3f\n", triangle_area);
    printf("CIRCULO: %0.3f\n", circle_area);
    printf("TRAPEZIO: %0.3f\n", trapezium_area);
    printf("QUADRADO: %0.3f\n", square_area);
    printf("RETANGULO: %0.3f\n", rectangle_area);

    return 0;
}