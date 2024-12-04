#include <stdio.h>
void main(){
    int limit,i,a[100],sum=0;
    printf("Enter your limit:");
    scanf("%d",&limit);

    printf("Enter your valus:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
        sum=sum+a[i];
    }
    printf("Sum of the array is this:%d \n",sum);
}