#include <stdio.h>
void main(){
    int i,j,k,st=5,st1=2;
    for(i=1;i<=4;i++){
        for(j=1;j<=st;j++){
            printf("* ");
        }
        if(i==4)
        break;
        for(k=1;k<=st1;k++){
            printf("\n*");
        }
        if(st==5)
        st+=5;
        else
        st=5;
        if(i%2==0){
            st1+=st1;
        }else{
            st1+=st1;
        }
        printf("\n");
    }
}