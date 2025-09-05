# include <stdio.h>
int main ()
{
int n, sum=0, original ;
printf ("enter the number\n");
scanf ("%d", &n);
original = n;

for (int i = 1; i<n; i++)
{
if (n%i == 0)
sum += i;
}
if ( sum == original)
{
    printf (" entered number is perfect\n");
}
else
    { printf("number is not perfect");}
}
