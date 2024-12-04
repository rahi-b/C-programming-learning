#include <stdio.h>
void main(){
    int i,n=10;
    int a[10]={1,2,5,3,7,10,9,15,12,20};

    printf("Array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]%5==0){
            a[i]=10;
        }
    }
    printf("\nAfter array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}