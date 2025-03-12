#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, smaller;

    printf("Primeiro valor: ");
    scanf("%d", &a);
    printf("Segundo valor: ");
    scanf("%d", &b);
    printf("Terceiro valor: ");
    scanf("%d", &c);

    if
        (a < b && a < c) {
      smaller = a;
      printf("MENOR = %d", smaller);
    }
    else if (b < a && b < c) {
        smaller = b;
        printf("MENOR = %d", smaller);
    }
    else {
        smaller = c;
        printf("MENOR = %d", smaller);
    }


    return 0;
}
