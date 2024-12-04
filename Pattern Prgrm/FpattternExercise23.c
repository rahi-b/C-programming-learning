#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=4;i++){

        for(j=1;j<=2;j++){
            if(j==2){
                printf("_ ");
            }
            for(k=1;k<=4+1-i;k++){
                printf("X ");
            }
              if(j==1){
                    printf("__ ");
                }
            printf("\n");
        }
        for(j=1;j<=i;j++){
            printf("X\n");
        }
    }
}