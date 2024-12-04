#include <stdio.h>
void main(){
    int i,j,y=50;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%d ",y);
        y-=5;
        }
        printf("\n");
    }
}