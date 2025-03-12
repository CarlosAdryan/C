#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,n;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);

    double sum[n];
    double mat[m][n];

    for (i=0; i<m; i++) {
        printf("Digite os elementos da %da. linha:\n", i+1);
        for(j=0; j<n; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }

    for (i=0; i<m; i++) {
        sum[i] = 0;
        for(j=0; j<n; j++) {
            sum[i] = sum[i] + mat[i][j];
        }
    }

    printf("VETOR GERADO:\n");
    for (i=0; i<m; i++) {
       printf("%.1lf\n", sum[i]);
    }

    return 0;
}
