#include <stdio.h>

void main(){
    int i,j,k;
    for(i=1;i<=3;i++){
        for(j=1;j<=i*2;j++){
            printf("* ");
            }
            if(i==3)
            break;
        for(k=1;k<=i*3;k++){
            printf("\n*");
        }
        printf("\n");
    }
}