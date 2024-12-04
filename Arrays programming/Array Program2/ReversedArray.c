#include <stdio.h>
void main(){
    int i,j,temp,n=10;
    int a[10]={1,6,3,5,5,6,7,9,8,10};

    printf("Your array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nReversed after array is this:\n");
    for(i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }

    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}