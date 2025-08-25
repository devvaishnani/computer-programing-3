#include <stdio.h>
int main ()
{ int n;
printf("enter number\n");
scanf("%d", &n);
 int i=1, sum;
 for (int count=1; count<=n; count++)
 {sum=sum+i;
 i=i+2;}
 printf("The summ is %d\n", sum);

}
