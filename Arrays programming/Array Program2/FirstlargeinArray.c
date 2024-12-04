#include <stdio.h>
void main(){
    int i,n=7,max=0;
    int a[7]={1,3,5,12,4,8,2};

    printf("Your array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    max=a[0];

    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("\nFirst Large number is %d ",max);
}