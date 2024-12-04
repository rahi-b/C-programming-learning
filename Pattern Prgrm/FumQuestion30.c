#include <stdio.h>
void main(){
    int i,j,k=0;
    for(i=1;i<=6;i++){
        k=0;
        for(j=1;j<=i+1;j++){
            printf("%d ",k);
            k=i*j;

        }
        printf("\n");
    }
}