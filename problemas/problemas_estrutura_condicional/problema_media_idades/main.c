#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, age1;
    double average, n, sum;


    printf("Digite as idades: \n");
    scanf("%d", &age1);

    if(age1 < 0) {
       printf("IMPOSSIVEL CALCULAR");
    } else {
        age = age1;
            while (age > 0) {
                n = n + 1;
                sum = sum + age;
                scanf("%d", &age);
            }
            average = sum / n;
            printf("MEDIA = %.2lf", (double)average);
    }





    return 0;
}
