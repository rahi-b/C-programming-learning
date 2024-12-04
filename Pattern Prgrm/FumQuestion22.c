#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=4;i++){

        for(k=1;k<=1;k++){
            printf("*\n");
        }

        for(k=1;k<=i;k++){
            for(j=1;j<=3;j++){
                printf("* ");
            }
            printf("\n");
        }
    }
}