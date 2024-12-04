#include <stdio.h>
void main(){
    int ar[100],i,limit;
    printf("Enter the limit of array:");
    scanf("%d",&limit);
    printf("Enter values are array");
    for(i=0;i<limit;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enterd values are this:\n");
       for(i=0;i<limit;i++){
        printf("%d\t",ar[i]);
    }

}
