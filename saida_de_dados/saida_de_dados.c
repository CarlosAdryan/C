#include <stdio.h>

int main()
{
    int idade = 32;
    double salario = 4560.9;
    char nome[50]   ;
    strcpy(nome, "Maria Silva");
    char sexo = 'F';

    printf("A funcionara %s, sexo %c, ganha %.2lf e tem %d anos", nome, sexo, salario, idade);
}
