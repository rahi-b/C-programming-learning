#include <stdio.h>
void main(){
    int i,j,flag=0,n=10;
    int a[10]={1,2,3,4,5,6,7,8,9,10};

    printf("This your array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    for(i=0;i<n;i++){
        flag=0;
        for(j=2;j<a[i];j++){
            if(a[i]%j==0){
                flag=1;
            }
        }
        if(flag==0 && a[i]!=1){
            a[i]=0;
        }
    }
    printf("\nafter array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}