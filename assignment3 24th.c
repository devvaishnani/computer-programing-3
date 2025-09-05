#include <stdio.h>
int main ()
{
int n, digit;
printf("enter the number\n");
scanf("%d", &n);

for (; n>=1 ; n = n/10 )
{
digit = n%10 ;
printf("%d", digit);
}
return 0;
}
