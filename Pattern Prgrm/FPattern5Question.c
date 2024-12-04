#include <stdio.h>
void main(){
    int i,j,k;
    for(i=3;i>=1;i--){
        for(j=1;j<=i*2;j++){
            printf("X ");
        }
        printf("\nX\n");
    }
}