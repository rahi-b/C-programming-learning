#include <stdio.h>
void main(){
    int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<=i;j++){
            if(j%2==0){
            printf("*");
            }else{
                printf("%d",i*j);
            }
        }
        printf("\n");
}
}