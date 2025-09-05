#include <stdio.h>
int main()
{
    int value[10];
    int sum = 0 ;
    printf("Enter ten values");
    for (int i = 0; i<10 ; i++)
    { scanf("%d", &value[i]);
        sum += value[i] ;
    }

    printf("Sum =  %d\n", sum);
    printf("Mean = %.2f\n", (float)(sum)/10 );
    return  0 ;



}
