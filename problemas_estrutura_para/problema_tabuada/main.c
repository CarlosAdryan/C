#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, multp;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    for(i=1; i <= 10; i++) {
        multp = n * i;
        printf("%d x %d = %d \n", n, i, multp);
    }

    return 0;
}
