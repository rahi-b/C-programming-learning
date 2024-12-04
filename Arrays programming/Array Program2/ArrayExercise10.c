#include <stdio.h>
void main(){
    int i,n=10,sum=0;
    int a[10]={1,2,3,4,5,6,7,8,9,10};

    printf("Aarray is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nAfter array is this:\n");
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            sum=sum+a[i];
        }else
        a[i]=1;
        if(a[i]==1){
            printf("* ");
        }else{
            printf("%d\t",a[i]);
        }
    }
    printf("\nSum of even numbers: %d",sum);
}