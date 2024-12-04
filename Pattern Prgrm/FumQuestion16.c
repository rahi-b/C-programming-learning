#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=6;i++){
        k=1;
        for(j=1;j<=i*2;j++)
        {
            printf("%d",k);
            if(i!=j){
            j<=i?k++:k--;
            }
        }
        printf("\n");
    }
}