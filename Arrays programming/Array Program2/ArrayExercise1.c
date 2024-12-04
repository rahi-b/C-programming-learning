#include <stdio.h>
void main(){
    int i,n=10;
    int a[10]={2,5,4,6,7,10,11,13,15,7};

    printf("Your array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nAfter array is this:\n");
    for(i=0;i<n;i++){
        if(a[i]%5==0){
            a[i+1]=-1;
            a[i+2]=-1;
        }
         if(a[i]!=-1){
    printf("%d\t",a[i]);
    }
}
}