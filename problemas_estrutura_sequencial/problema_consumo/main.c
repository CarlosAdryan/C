#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    double distance, spent, medium;

    printf("Distancia percorrida: ");
    scanf("%lf", &distance);
    printf("Combustivel gasto: ");
    scanf("%lf", &spent);

    medium = distance / spent;

    printf("Consumo medio = %.3lf", medium);


    return 0;
}
