#include <stdio.h>
void main(){
    int limit,i,ar[100],j,temp;
    printf("Enter limit of array:");
    scanf("%d",&limit);

    printf("Enter a values of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(ar[i]>ar[j]){
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    printf("sorted value are this:");
    for(i=0;i<limit;i++){
        printf("%d\t",ar[i]);
    }
}