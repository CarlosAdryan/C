#include <stdio.h>
#include <stdlib.h>

int main()
{
    int duration, hours, minutes, seconds, wholepart1, wholepart2, restseconds;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duration);

    hours = duration / 3600;
    wholepart1 = (int)hours;

    restseconds = duration - (wholepart1 * 3600);

    minutes = restseconds / 60;
    wholepart2 = (int)minutes;

    seconds = restseconds - (wholepart2 * 60);





    printf("%d:%d:%d", wholepart1, wholepart2, seconds);


    return 0;
}
