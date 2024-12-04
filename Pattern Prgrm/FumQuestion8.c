#include <stdio.h>
void main(){
    int i,j,k,x=0;
    for(i=1;i<=9;i++){
        x=1;
        i<=5?k++:k--;
        for(j=1;j<=9;j++){
            if(j>=6-k&&j<=4+k){
                printf("%d",x);
                x++;
            }else
            printf(" ");
        }
        printf("\n");
    }
}