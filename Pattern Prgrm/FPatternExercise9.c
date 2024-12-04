#include <stdio.h>
void main(){
    int i,j,k,st=2;
    for(i=1;i<=3;i++){
        for(j=1;j<=st;j++){
            printf("* ");
        }
        for(k=1;k<=i*2-1;k++){
            printf("\n*");
        }
        st=st*2;
        printf("\n");
    }
}