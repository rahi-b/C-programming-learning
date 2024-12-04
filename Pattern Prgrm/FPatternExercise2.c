#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=3;i++){
        for(j=1;j<=i*3;j++){
            printf("* ");
        }
        for(k=1;k<=i*1;k++){
            printf("\n*");
            if(i==3)
            break;
        }
        printf("\n");
    }
    for(j=1;j<=1;j++){
        printf("* ");
    }
}