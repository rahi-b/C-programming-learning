#include <stdio.h>
void main(){
    int i,j;
    char str[]="MALAYALAM";
    for(i=0;i<=9;i++){
       for(j=0;j<i;j++){
        printf("%c",str[j]);
       }
       printf("\n");
    }
}