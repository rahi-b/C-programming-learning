#include <stdio.h>
void main(){
    int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<=10;j++){
            if(j==6-i||j==4+i||i==6){
                printf("*");
            }else
            printf(" ");
        }
        printf("\n");
    }
}