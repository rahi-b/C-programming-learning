#include <stdio.h>
void main(){
    int i,j,n=6,count=0;
    int a[6]={2,1,2,3,2,3};

    printf("Your array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nYour answer is this:\n");
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(a[i]!=-1){
                if(a[i]==a[j]){
                    count++;
                }
            }
        }
    if(count==2){
            printf("%d=%d",a[i],count);
            a[i]=-1;
        }
    }
}