#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=3;i++){
        for(j=1;j<=i*5;j++){
            printf("* ");
        }
        for(k=1;k<=i*2;k++){
            printf("\n*");
        }
        printf("\n");
    }
}