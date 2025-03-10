#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A, B, C, squarearea, trianglearea, trapezearea;

    printf("Digite a medida A: ");
    scanf("%lf", &A);
    printf("Digite a media B: ");
    scanf("%lf", &B);
    printf("Digite a media C: ");
    scanf("%lf", &C);

    squarearea = A * A;
    trianglearea = (A * B) / 2;
    trapezearea = (A + B) * C / 2;

    printf("AREA DO QUADRADO = %.4lf\n", squarearea);
    printf("AREA DO TRIANGULO = %.4lf\n", trianglearea);
    printf("AREA DO TRAPEZIO = %.4lf\n", trapezearea);


    return 0;
}
