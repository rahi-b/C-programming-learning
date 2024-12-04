#include <stdio.h>
void main(){
    int i,j,n,a[100],flag=0;
    printf("Enter your limit:\n");
    scanf("%d",&n);
    printf("Enter values:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Your array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
   printf("after array:\n");
    for(i=0;i<n;i++){
        flag=0;
        for(j=2;j<a[i];j++){
            if(a[i]%j==0){
                flag=1;
                }
            }
            if(flag==1 || a[i]==1){
                printf("\n%d\t",a[i]);
                
            }

        }
    
}