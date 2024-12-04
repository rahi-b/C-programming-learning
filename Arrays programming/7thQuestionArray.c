#include <stdio.h>
void main(){
    int a[100],i,limit;
    float avg=0,sum=0;
    printf("Enter the limit number:\n");
    scanf("%d",&limit);
    printf("Enter the values of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
            sum=sum+a[i];
        }
        avg=sum/limit;
        printf("sum of the array:%f\n",sum);
        printf("Everage number of the array:%f\t",avg);
    }


