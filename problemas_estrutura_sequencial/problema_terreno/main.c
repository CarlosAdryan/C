#include <stdio.h>
#include <stdlib.h>

int main()
{
    double width, length, squaremeter, landarea, landprice;


    printf("Digite a largura do terreno: ");
    scanf("%lf", &width);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &length);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &squaremeter);

    landarea = width * length;
    landprice = landarea * squaremeter;

    printf("Area do terreno = %.2lf\n", landarea);
    printf("Preco do terreno = %.2lf\n", landprice);

    return 0;
}
