#include<stdio.h>
int main()
{ int n;
printf("enter number\n");
scanf("%d", &n);
 int i=0, count=1, sum=0;
while(count<=n)
 {sum=sum+i;
 i=i+2;
 count++;
 }
 printf("sum of first n even number =%d", sum);
return 0;
}
