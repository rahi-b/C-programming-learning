#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        k=1;
        for(j=1;j<=11-i*2;j++){
                printf("%d",k);
                j<6-i?k++:k--;
          }
        
        printf("\n");
    }
    }