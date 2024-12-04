#include <stdio.h>
void main(){

    int i,j,k=0,x;
    for(i=1;i<=9;i++){
        x=1;
        if(i<=5)
        k++;
        else
        k--;
        for(j=1;j<=5;j++){
            if(j>=6-k){
             printf("%d",x);
             x++;
             }
             else{
                printf(" ");
             }
        }
           
        printf("\n");
    }
}