#include <stdio.h>
int main()
{
int n, sum = 0 ;
printf("enter the number");
scanf("%d", &n);
do
{
 printf("%d\n", (n%10) );
 sum += n%10 ;
 n = n/10 ;
}
while (n>=1);
printf("sum is = %d", sum);
return 0;
}
