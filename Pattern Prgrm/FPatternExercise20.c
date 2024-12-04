#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            for(k=1;k<=2;k++){
                printf("* ");
            }
            printf("\n");
        }
        if(i==4)
        break;
        for(j=1;j<=i*5;j++){
            printf("* ");
        }
        printf("\n");
    }
}