#include <stdio.h>
void main(){
    int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<=6;j++){
            if(j>=7-i){
                printf("%d",i);
            }else
            printf("1");
        }
        printf("\n");
    }
}