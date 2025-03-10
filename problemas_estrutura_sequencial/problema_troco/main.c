#include <stdio.h>
#include <stdlib.h>

int main()
{
    double quantity, productprice, moneyreceived, totalvalue, change;


    printf("Preco unitario do produto: ");
    scanf("%lf", &productprice);
    printf("Quantidade comprada: ");
    scanf("%lf", &quantity);
    printf("Dinheiro recebido: ");
    scanf("%lf", &moneyreceived);

    totalvalue = productprice * quantity;
    change = totalvalue - moneyreceived;

    printf("TROCO = %.2lf", change);



    return 0;
}
