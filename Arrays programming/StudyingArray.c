#include <stdio.h>
void main(){
    int limit,i,a[100];
    printf("Enter your limit of array:\n");
    scanf("%d",&limit);

    printf("Enter your values of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("Reversed array is this:\n");
    for(i=limit-1;i>=0;i--){
        printf("%d\t",a[i]);
    }
}

