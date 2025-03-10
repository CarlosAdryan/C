#include <stdio.h>

int main()
{
    double r, elevate, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &r);

    elevate = r * r;
    area = 3.141559 * elevate;

    printf("AREA = %.3lf", area);



    return 0;
}
