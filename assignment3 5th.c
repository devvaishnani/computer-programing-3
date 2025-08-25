#include<stdio.h>
int main()
{
int n;
printf("enter the no.\n");
scanf("%d", &n);
int i=1, count;
while(count<=n)
{printf("%d\n", i);
count++;
i=i+2;}
return 0;
}
