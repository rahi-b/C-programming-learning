#include <stdio.h>
void main(){
    int i,j,k=65;
    for(i=1;i<=7;i++){
        for(j=1;j<=i;j++){
            if(i%2==0)
            printf("%d ",i/2);


            else
            printf("%c ",k);
        }
        if(i%2==0)
        k++;

        printf("\n");
    }
}