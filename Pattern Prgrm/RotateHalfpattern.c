#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        k=65;
        for(j=1;j<=9;j++){
            if(j>=i && j<=10-i)
             printf("%c",k++); 
            
            else
            printf(" ");
        }
        printf("\n");
    }
}