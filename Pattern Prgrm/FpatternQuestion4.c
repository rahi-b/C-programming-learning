#include <stdio.h>
void main(){
    int i,k,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=i;j++){
            printf("*\n");
        }
        for(k=1;k<=i*4;k++){
            printf("*");
        }
        printf("\n");
    }
}