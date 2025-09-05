#include <stdio.h>
int main ()
{
    float n ;
    int numbers=0;
    printf("Enter the number\n");
    scanf("%f", &n);
    do
{
    n = n/10 ;
    numbers++;
}
    while(n>1);
    printf("Total Digits in the given number = %d", numbers);
    return 0;
}
