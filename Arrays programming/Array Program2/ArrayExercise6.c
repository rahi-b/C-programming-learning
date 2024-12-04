#include <stdio.h>
void main(){
    int i,j,n=10,flag=0;
    int a[10]={1,2,3,4,5,6,7,8,9,10};

    printf("Your array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nChanging after array is this:\n");

    for(i=0;i<n;i++){
        flag=0;
        for(j=2;j<a[i];j++){
            if(a[i]%j==0){
                flag=1;
            }
        }
        if(flag==0 && a[i]!=1){
            a[i]=0;
        }else{
            a[i]=1;
        }
        printf("%d\t",a[i]);
    }
}