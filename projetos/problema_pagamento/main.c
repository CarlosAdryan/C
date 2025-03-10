#include <stdio.h>
#include <stdlib.h>

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
    char name[50];
    double valuePerHour, workHours, salary;


    printf("Nome: ");
    ler_texto(name, 50);
    printf("Valor por hora: ");
    scanf("%lf", &valuePerHour);
    limpar_entrada();
    printf("Horas trabalhadas: ");
    scanf("%lf", &workHours);

    salary = valuePerHour * workHours;

    printf("O pagamento para %s deve ser %.2lf", name, salary);




    return 0;
}
