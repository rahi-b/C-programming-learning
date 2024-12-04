#include <stdio.h>
void main(){
    int i,limit,a[100],temp;
    printf("Enter limit of array:\n");
    scanf("%d",&limit);

    printf("Enter values of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<limit-1;i+=2){
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    printf("changed array is this:\n");
    for(i=0;i<limit;i++){
        printf("%d\t",a[i]);
    }
}