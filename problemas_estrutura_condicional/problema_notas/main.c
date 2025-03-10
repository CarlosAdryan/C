#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    double note1, note2, finalnote;

    printf("Digite a primeira nota: ");
    scanf("%lf", &note1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &note2);

    finalnote = note1 + note2;

    if (finalnote > 60.00) {
        printf("NOTA FINAL = %.1lf", finalnote);
    } else {
       printf("NOTA FINAL = %.1lf\n", finalnote);
       printf("REPROVADO");
    }

    return 0;
}
