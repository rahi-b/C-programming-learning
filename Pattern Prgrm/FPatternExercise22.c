#include <stdio.h>
void main(){
    int i,j,st=2;

    for(i=1;i<=3;i++){
        
         for(j=1;j<=i;j++){
            for(int k=1;k<=2;k++){
                printf("X ");
            }
            printf("\n");
        }

        for(j=1;j<=i;j++){
            printf("_ ");
        }
        for(j=1;j<=st;j++){
            printf("X ");
        }
        st=st*2;
        printf("\n");
    }
}