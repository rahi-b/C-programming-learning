#include <stdio.h>
void main(){
    int limit,i,j,a[100],c=0,flag=0;
    printf("Enter your limit of array:\n");
    scanf("%d",&limit);

    printf("Values of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("\nDuplicate element ara this:");
    for(i=0;i<limit;i++){
        for(j=i+1;j<limit;j++){
            if(a[i]==a[j]){
                c=1;
                printf("%d\t",a[i]);
            }
        }
    }
}