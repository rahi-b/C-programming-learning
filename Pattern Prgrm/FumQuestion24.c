#include <stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        k=1;
        for(j=1;j<=i*2-1;j++){
            printf("%d",k);
            j<i?k++:k--;
        }
        printf("\n");
    }
}