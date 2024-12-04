#include <stdio.h>
void main(){
    int i,j,k=0;
    for(i=0;i<=5;i++){
        k=0;
        for(j=1;j<=i;j++){
            if(j<=i){
            printf("%d ",k);
            k=k+i-1;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}