#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=4;i++){
        k=49;
        for(j=1;j<=7;j++){
            if(j>=5-i && j<=3+i){
                printf("%c",k);
                k++;
                if(j==4)
                k=65; 
            }else
            printf(" ");
        }
        printf("\n");
    }
}