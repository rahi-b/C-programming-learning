#include <stdio.h>
void main(){
    int i,j,k=1;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            if(j==i ||j==10-i){
                printf("%d",k);  
            } 
            else
            printf(" ");
        }
           i<5?k++:k--;
        
        printf("\n");
    }
}