#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=3;i++){
        for(j=1;j<=2;j++){
            for(k=1;k<=i;k++){
                printf("* ");
            }
            printf("\n");
        }
        for(j=1;j<=i*3;j++){
            printf("* ");
        }
        printf("\n");
    }
}