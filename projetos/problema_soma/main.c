#include <stdio.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int X, Y;
    int sum;

    printf("Digite o valor de X: ");
    scanf("%d", &X);
    printf("Digite o valor de Y: ");
    scanf("%d", &Y);

    sum = X + Y;

    printf("SOMA = %d", sum);


    return 0;
}
