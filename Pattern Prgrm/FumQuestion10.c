#include <stdio.h>
void main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=11;j++){
            if(j<=i*2-1 ||j>=13-i*2){
                printf("*");
            }else
            printf(" ");
        }
        printf("\n");
    }
}