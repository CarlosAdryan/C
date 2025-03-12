#include <stdio.h>
#include <math.h>

int main()
{
    double base, height, area, perimeter, diagonal, elevation1, elevation2, sum;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &height);

    area = base * height;
    perimeter = 2 * (base + height);
    elevation1 = base * base;
    elevation2 = height * height;
    sum = elevation1 + elevation2;
    diagonal = sqrt(sum);

    printf("AREA = %.4lf\n", area);
    printf("PERIMETRO = %.4lf\n", perimeter);
    printf("DIAGONAL = %.4lf\n", diagonal);

    return 0;
}
