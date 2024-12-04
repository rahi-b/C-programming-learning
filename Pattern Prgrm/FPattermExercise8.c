#include <stdio.h>
void main(){
    int i,j,k,st=1,st1=4;
    for(i=1;i<=4;i++){
        for(k=1;k<=st;k++){
            printf("*\n");
             }  
        if(i==4)
        break;
        for(j=1;j<=st1;j++){
            printf("* ");
        }
        printf("\n");

        if(st==1){
            st++;
        }else{
        st--;
        }

        if(st1==8)
        st1+=2;
        else
        st1+=4;
    }
}