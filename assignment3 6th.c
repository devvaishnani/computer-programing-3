#include<stdio.h>
int main ()
{ int n;
printf("enter the number\n");
scanf("%d", &n);
int i=0, count=1;
do
{printf("%d\n", i);
 i =i+2;
 count++;
 }
 while (count<=n);
}
