#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y;

    while (X != Y && Y != X) {
      printf("Digite dois numeros: \n");
        scanf("%d", &X);
        scanf("%d", &Y);
            if(X > Y){
                printf("DECRESCENTE!\n");
            } else if (X < Y) {
                printf("CRESCENTE!\n");
            } else {
                printf("");
            }
    }



    return 0;
}
