#include <stdio.h>
void main(){
    int i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=7;j++){
            if(i==1||i==7||i==j||j==8-i||j==1||j==7){
                printf("*");
            }else
            printf(" ");
        }printf("\n");
    }

}