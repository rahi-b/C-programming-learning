#include <stdio.h>
void main(){
    int i,j,r;
    printf("Enter your rows:");
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        for(j=1;j<=r-1;j++){
            if(j>=i && j<=2*r-i)
            printf("* ");
            else
            printf(" ");

        }
        printf("\n");
    }
}