#include <stdio.h>
void main(){
    int i,j,n=8,sum=0;
    int a[8]={1,2,3,4,5,6,7,8};

    printf("This your array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nAfter array is this:\n");
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            sum=sum+a[i];
        }else{
            a[i]=-1;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]!=-1){
            printf("%d\t",a[i]);
        }
    }
    printf("\nSum of Exsiting numbers %d",sum);
}