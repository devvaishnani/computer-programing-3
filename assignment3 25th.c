#include <stdio.h>
int main()
{
int n, original , reverse=0, digit;
printf("enter the number ");
scanf("%d", &n);
original = n;
for (; n>=1 ; n=n/10)
{
digit = n%10;
reverse = reverse*10 + digit;
}
if (reverse == original )
{ printf("number is pallidrome");}
else
{printf("number is not pallidrome");}
return 0;

}
