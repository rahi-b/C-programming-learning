#include <stdio.h>
void main(){
    int i,j,st1=4;
    for(i=1;i<=4;i++){
            if(i%2==0){
                printf("*\n*\n");
            }else{
                printf("*\n");
            }
        if(i==4)
        break;
        for(j=1;j<=st1;j++){
            printf("* ");
        }

        if(st1<8){
            st1+=4;
        }else{
            st1+=2;
        }
        printf("\n");
    }
}