#include <stdio.h>
int main()
{
int n , digit, digit_3 , original, sum=0 ;
printf("enter the number ");
scanf("%d", &n);
original = n ;
 for (; n>=1; n = n/10)

 {
 digit = n%10 ;
 digit_3 = digit*digit*digit ;
 sum = digit_3 + sum ;
 }
 if (original == sum )
 { printf(" number is amstrong number");}
 else
 { printf("number is not amstrong number");}
return 0;
}
