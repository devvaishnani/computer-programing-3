# include <stdio.h>
int main ()
{
int n, sum=0 ;
printf ("enter the number\n");
scanf ("%d", &n);


for (int i = 2; i<n; i++)
{
if (n%i == 0)
sum += i;
}
if ( sum == 0)
{
    printf (" entered number is prime\n");
}
else
    { printf("number is not prime");}
}
