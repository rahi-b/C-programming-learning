#include <stdio.h>
void main(){
    int limit,i,a[100],position,value;
    printf("Enter limit of array:\n");
    scanf("%d",&limit);

    printf("Enter the values of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the location where you insert your value:\n");
    scanf("%d",&position);

    printf("Enter the value to insert:\n");
    scanf("%d",&value);

    for(i=limit-1;i>=position-1;i--){
        a[i+1]=a[i];
    }
    a[position-1]=value;

    printf("Changed value are this:\n");
    for(i=0;i<=limit;i++){
        printf("%d\t",a[i]);
    }

}