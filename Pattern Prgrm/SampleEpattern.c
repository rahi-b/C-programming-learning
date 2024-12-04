#include <stdio.h>
void main(){
    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=i*2;j++){
            printf("* ");
        }
        if(i==3)
        break;
        for(j=1;j<=i*3;j++){
            printf("\n* ");
        }
        printf("\n");
        }

    }
