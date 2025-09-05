#include <stdio.h>
int main(){
    int value[200];
    int positive =  0, negative = 0, zero = 0;
    printf("Enter 200 values");
    for (int i=0; i<200; i++)
    {
            scanf("%d", &value[i]);
            if(value[i]>0){
                positive++;
            }
            else if (value[i]<0){
                negative++;
            }
            else {
                zero++;
            }
    }
    printf("The no. of positive values is %d\n", positive);
    printf("The no. of negative values is %d\n", negative);
    printf("The no. of zeros values is %d\n", zero);

    return 0;
}
