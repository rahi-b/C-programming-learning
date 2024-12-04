#include <stdio.h>
// void main(){
//     int i,j,k;
//     for(i=1;i<=3;i++){
//         for(j=1;j<=i*2;j++){
//             printf("*");
//             if(j%i==0){
//                 printf("\n");
//             }
//          }
//         for(k=1;k<=i*3;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

void main(){
    int i,j,k,y;
    for(i=1;i<=4;i++){
        for(j=1;j<=2;j++){
            for(k=1;k<=i*3;k++){
                printf("*");
            }
            printf("\n");
        }
        for(y=1;y<=1;y++){
            printf("\n*");
        }
        if(y==3){
            break;
        }
        printf("\n");
    }
}