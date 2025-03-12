#include <stdio.h>
#include <stdlib.h>

void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

int main()
{
    int n, i;
    double sum, average, sumsmallers, smallers;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char names[n][50];
    int age[n];
    double height[n];

    sum = 0;
    for(i=0; i<n; i++) {
        printf("Dados da %da pessoa: \n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(names[i]);
        printf("Idade: ");
        scanf("%d", &age[i]);
        printf("Altura: ");
        scanf("%lf", &height[i]);

        sum = sum + height[i];
        average = sum / n;
    }

    for (i=0; i<n; i++) {
        if (age[i] < 16) {
            sumsmallers = sumsmallers + 1;
            smallers = (sumsmallers / n) * 100;
        }
    }

    printf("\nAltura media: %.2lf\n", average);
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", smallers);

    for (i=0; i<n; i++) {
        if (age[i] < 16) {
            printf("%s\n", names[i]);
        }

    }

    return 0;
}
