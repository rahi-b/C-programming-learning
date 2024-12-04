#include <stdio.h>
void main(){
    int i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=6;j++){
            printf("%c ",i+64);
        }
        printf("\n");
    }
}