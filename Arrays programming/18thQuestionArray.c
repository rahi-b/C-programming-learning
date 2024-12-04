#include <stdio.h>
void main(){
    int i,j,limit,a[100];
    printf("Enter limit:\n");
    scanf("%d",&limit);

    printf("Enter values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<limit;i++){
           if(a[i]%5==0){
        for(j=i;j<limit;j++){
                a[j]=a[j+1];
            }
            limit--;
            i--;
        }
    }
    printf("5Multiple deleted after array:\n");
    for(i=0;i<limit;i++){
        printf("%d\t",a[i]);
    }
}