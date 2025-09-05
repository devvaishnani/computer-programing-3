#include <stdio.h>
int main()
{
    int value[100];
    int max, min;

    printf("enter 100 values");
    scanf ("%d", &value[0]);
    max = value[0];
    min = value[0];

    for(int i=1; i<=99; i++)
    {
        scanf("%d", &value[i]);

        if( max < value[i])
        {
            max = value[i];
        }

        if( min > value[i])
        {
            min = value[i];
        }
    }

    printf("largest value out of 100 values is %d\n", max);
    printf("smallest value out of 100 values is %d\n", min);
    return 0;
}
