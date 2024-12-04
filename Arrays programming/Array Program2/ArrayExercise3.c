#include <stdio.h>
void main(){
    int i,j,n=10,count=0;
    int a[10]={1,2,1,3,4,3,5,6,5,7};

    printf("Your array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(j=i;j<n;j++){
                    a[j]=a[j+1];
                }
                n--;
                i--;
            }
        }
    }
    printf("\nDeleted After array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}