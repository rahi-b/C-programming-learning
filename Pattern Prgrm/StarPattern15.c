#include <stdio.h>
void main(){
    int i,j,k=0,x;
    for(i=1;i<=9;i++){
        if(i<=5)
        k++;
        else
        k--;
        x=1;
        for(j=1;j<=5;j++){
            if(j>=6-k){
                printf("%d",x);
                x++;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}