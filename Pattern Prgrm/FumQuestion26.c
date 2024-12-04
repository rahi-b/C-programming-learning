#include <stdio.h>
void main(){
    int i,j,k=0;
    for(i=1;i<=4;i++){
        k=1;
        for(j=1;j<=8;j++){
            if(j<=5-i || j>=4+i){
                printf("%d",k);
            }else
            printf("*");
            if(j!=4){
             j<4?k++:k--;
            }
        }
        printf("\n");
    }
}