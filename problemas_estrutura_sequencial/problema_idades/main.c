#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}


int main()
{
    char name1[50], name2[50];
    int age1, age2;
    double media;
    double sum;

    printf("Dados da primeira pessoa: \n");
    printf("Nome: ");
    ler_texto(name1, 50);
    printf("Idade: ");
    scanf("%d", &age1);

    limpar_entrada();

    printf("Dados da segunda pessoa: \n");
    printf("Nome: ");
    ler_texto(name2, 50);
    printf("Idade: ");
    scanf("%d", &age2);

    sum = age1 + age2;
    media = sum / 2;

    printf("A idade media de %s e %s e de %.1lf anos", name1, name2, media);

    return 0;
}
