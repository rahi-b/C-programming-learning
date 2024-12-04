#include <stdio.h>
void main(){
    int i,j,limit,a[100],b[100];
    printf("Enter your limit of array:\n");
    scanf("%d",&limit);

    printf("Enter values of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<limit;i++){
        b[i]=a[i];
    }
    printf("1st array:\n");
    for(i=0;i<limit;i++){
        printf("%d\t",a[i]);
    }
    printf("\n2nd array:\n");
    for(i=0;i<limit;i++){
        printf("%d\t",b[i]);
    }
}