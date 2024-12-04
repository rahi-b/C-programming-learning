#include <stdio.h>
void main(){
    int i,j,k,st=1;
    for(i=1;i<=4;i++){
        for(k=1;k<=st;k++){
            printf("*\n");
        }
        for(j=1;j<=i*2;j++){
            printf("* ");
        }
        if(st==1){
            st+=2;
        }else{
            st=1;
        }
        printf("\n");
    }
}