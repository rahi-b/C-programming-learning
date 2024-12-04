#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=3;i++){
        for(k=1;k<=2;k++){
            for(j=1;j<=i*3;j++){
                printf("* ");
            }
            printf("\n");
        }
        if(i==3)
        break;
        for(k=1;k<=i;k++){
            printf("*\n");
        }
    }
}