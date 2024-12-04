#include <stdio.h>
void main(){
    int i,n=10;
    int a[10]={1,3,5,6,7,10,12,13,15,18};

    printf("Array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%3==0){
            a[i]=0;
        }
        else if(a[i]%5==0){
            
        }
    }
}