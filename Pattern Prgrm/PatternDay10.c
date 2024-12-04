#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        k=49;
        for(j=1;j<=9;j++){
        if(j==6-i || j==4+i || i==5){
        printf("%c",k);
        k++;}
        else
        printf(" ");
        }
        printf("\n");
    }
}