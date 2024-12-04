#include <stdio.h>
void main(){
    int a[100]={2,9,7,5,4,10};
    int i,j,flag,n=6;

    for(i=0;i<n;i++){
        flag=0;
        for(j=2;j<a[i];j++){
            if(a[i]%j==0){
                flag=1;
                break;
            }
        }
    if(flag==0){
        for(j=i;j<n;j++){
            a[j]=a[j+1];
        }
        n--;
        i--;
    }

    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}