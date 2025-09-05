#include <stdio.h>
int main(){
int n;
int sum = 0;

printf("The number of values entered\n");
scanf("%d", &n);
int value[n];
printf("Enter the values\n");
for(int i=0; i<n; i++){
    scanf("%d", &value[i]);
    sum += value[i];
}
printf("The sum is %d\n", sum);
printf("The mean is %f\n", (float)sum/n);

return 0;

}
