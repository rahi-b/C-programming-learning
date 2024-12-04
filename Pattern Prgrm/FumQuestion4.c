#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=3;i++){
        for(j=1;j<=i;j++){
            for(k=1;k<=i*2;k++){
                printf("* ");
            }
            printf("\n");
        }
        if(i==3)
        break;
        for(k=1;k<=3;k++){
            printf("*\n");
        }
    }
}