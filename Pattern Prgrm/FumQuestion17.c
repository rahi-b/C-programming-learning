#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=9;i++){
        i<=5?k++:k--;
        for(j=1;j<=9;j++){
            if(j>=11-k*2){
                printf("*");
            }else
            printf(" ");
        }
    printf("\n");
    }
}