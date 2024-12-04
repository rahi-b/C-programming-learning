#include <stdio.h>
void main(){
    int i,limit,j,temp,k,a[100];
    printf("Enter limit of array:\n");
    scanf("%d",&limit);

    printf("Enter values of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter how time rotate:\n");
    scanf("%d",&k);
    for(j=1;j<=k;j++){
        temp=a[0];
        for(i=0;i<limit-1;i++){
            a[i]=a[i+1];
        }
        a[i]=temp;

    }
    printf("Changed array is this:\n");
    for(i=0;i<limit;i++){
        printf("%d\t",a[i]);
    }
}