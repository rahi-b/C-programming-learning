#include <stdio.h>
void main(){
    int i,j,k,st=4;
    for(i=1;i<=3;i++){

        for(j=1;j<=2;j++){
            for(k=1;k<=st+1-i;k++){
                printf("X ");
            }
            printf("\n");
        }
            
        if(i==3)
        break;
        for(k=1;k<=2;k++){
            printf("X\n");
        }
    }
}