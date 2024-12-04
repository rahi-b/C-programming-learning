#include <stdio.h>
void main(){
    int i,j,k,y=10;
    for(i=1;i<=5;i++){
        for(j=1;j<=y;j++){
            printf("*");
        }
        y-=2;
        for(k=1;k<=i;k++){
            printf("\n*");
        }
        printf("\n");

    }

}