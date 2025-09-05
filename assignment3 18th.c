#include <stdio.h>
int main ()
{
char gender[50];
int M = 0 , F = 0 ;
printf("enter M for male and F for female for 50 students\n");
for (int i=0; i<50; i++)
{
    scanf(" %c", &gender[i]);
    if (gender[i] == 'M' || gender[i] == 'm')
    { M++ ; }
    else
    { F++; }
}
    printf("Number of males = %d\n", M);
    printf("Number of females = %d\n", F);


return 0;
}
