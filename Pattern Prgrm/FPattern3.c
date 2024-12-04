#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=3;i++){
        if(i==1){
            printf("*\n ");
        }
        for(k=1;k<=i;k++){
            for(j=1;j<=i;j++){
                printf("* ");
            }
        printf("\n");
        }
        for(j=1;j<=3*i;j++){
            printf("* ");

        }
        printf("\n");
    }
    
}