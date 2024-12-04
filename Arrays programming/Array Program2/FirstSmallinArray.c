#include <stdio.h>
void main(){
    int i,n=6,min=0;
    int a[6]={4,15,5,10,8,6};

    printf("This is your array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    

    min=a[0];
    for(i=0;i<n;i++){
        if(a[i]<min){
        min=a[i];
        }
    }
    printf("\nFirst Small letter is this %d ",min);
}