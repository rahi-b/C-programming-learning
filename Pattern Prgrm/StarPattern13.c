#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=4;i++){
        k=i;
        for(j=1;j<=7;j++){
            if(j>=5-i && j<=3+i){
                printf("%d",k);
                  if(j<4)
                k++;
                else
                k--;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}