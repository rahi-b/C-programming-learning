#include <stdio.h>
//pattern 3//
// void main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5-i+1;j++){
//         printf("*");
//     }
//     printf("\n");
// }
// }

void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1|| i==5 || j==1 || j==5 || i==j || j==5-i+1){
                printf("* ");
            }
         else printf("  ");
        }
        printf("\n");
    }
}