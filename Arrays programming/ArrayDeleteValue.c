#include <stdio.h>
void main(){
    int limit,i,a[100],position;
    printf("Enter your limit of array:\n");
    scanf("%d",&limit);

    printf("Enter your values of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the location where you wish to delete value:\n");
    scanf("%d",&position);

    for(i=position-1;i<limit-1;i++){
        a[i]=a[i+1];
    }
    printf("Deleted later array is this:\n");
    for(i=0;i<limit-1;i++){
        printf("%d\t",a[i]);
    }
}