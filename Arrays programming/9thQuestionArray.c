#include <stdio.h>
void main(){
    int i,limit,position,a[100];

    printf("Enter your limit:\n");
    scanf("%d",&limit);

    printf("Enter your values of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter your deleted position:\n");
    scanf("%d",&position);

    for(i=position-1;i<=limit-1;i++){
        a[i]=a[i+1];
    }
    printf("After deleted array:\n");
    for(i=0;i<limit-1;i++){
        printf("%d\t",a[i]);
    }
}