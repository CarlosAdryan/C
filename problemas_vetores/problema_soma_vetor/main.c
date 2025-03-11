#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    double sum, average;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for(i=0; i<n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        sum = sum + vet[i];
        average = sum / n;
    }

    printf("\nVALORES = ");
    for(i=0; i<n; i++) {
        printf("%.1lf  ", vet[i]);
    }

    printf("\nSOMA = %.2lf\n", sum);
    printf("MEDIA = %.2lf\n", average);


    return 0;
}
