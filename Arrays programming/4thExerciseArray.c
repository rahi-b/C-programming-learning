#include <stdio.h>
void main(){
    int i,limit,a1[100],a2[100];
    printf("Enter your limit:\n");
    scanf("%d",&limit);

    printf("Enter your value array 1:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a1[i]);
    }
    for(i=0;i<limit;i++){
        a2[i]=a1[i];
    }
    printf("Array1 value is this:\n");
    for(i=0;i<limit;i++){
        printf("%d\t",a1[i]);
    }

    printf("\nArray2 value is this:\n");
    for(i=0;i<limit;i++){
        printf("%d\t",a2[i]);
    }
}