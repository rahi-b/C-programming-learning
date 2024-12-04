#include <stdio.h>
void main(){
    int i,j,k,x;
    for(i=1;i<=9;i++){
        i<=5?k++:k--;
           x=1;
        for(j=1;j<=9;j++){
            if(j>=k && j<=10-k &&x){
                printf("*");
                x=0;
            }else{
                printf(" ");
                x=1;
            }
        }
        printf("\n");
    }
}