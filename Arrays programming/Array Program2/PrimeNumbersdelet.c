#include <stdio.h>
void main(){
    int i,j,flag=0,n=7;
    int a[7]={1,2,3,4,5,6,8};

    printf("Your arrray is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    for(i=0;i<n;i++){
        flag=0;
        for(j=2;j<a[i];j++){
            if(a[i]%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0 && a[i]!=1){
            for(j=i;j<n;j++){
                a[j]=a[j+1];
            }
            n--;
            i--;
        }
    }
    printf("\nPrime number delete after array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

}