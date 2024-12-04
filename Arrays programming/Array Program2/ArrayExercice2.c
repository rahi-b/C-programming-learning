#include <stdio.h>
void main(){
    int i,j,n=7,count=0,flag=0;
    int a[7]={1,2,1,3,4,5,4};

    printf("Your array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    // printf("\nAfter array is this:\n");
    for(i=0;i<n;i++){
        flag=0;
        for(j=0;j<n;j++){
            if(i!=j){
            if(a[i]==a[j]){
                flag=1;
                break;
            }
            }
        }
        if(flag==0){
            count++;
        }
    }
    printf("\nUnigue numbers count %d",count);

}