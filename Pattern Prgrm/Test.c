#include <stdio.h>
// void main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=0;j<=i;j++){
//             if(j%2==0){
//                 printf("%d ",j*i);
//             }else
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// void main(){
//     int i,j,k=0;
//     for(i=1;i<=5;i++){
//         k=1;
//         for(j=1;j<=11-i*2;j++){
//             printf("%d",k);
//             j<6-i?k++:k--;
//         }
//         printf("\n");
//     }
// }

// void main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=9;j++){
//             if(j==6-i||j==4+i){
//                 printf("*");
//             }else if(i==5){
//                 printf("#");
            
//             }else if(j<4+i&& j>=6-i){
//             printf("-");
//             }else
//             printf(" ");
//     }
//     printf("\n");
// }
// }

// void main(){
//     int i,j,k;
//     for(i=1;i<=9;i++){
//         i<=5?k++:k--;
//         for(j=1;j<=9;j++){
//             if(j==6-k||j==4+k){
//                 printf("*");
//             }else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }

void main(){
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            if(j==i||j==10-i){
                printf("*");
            }else 
            printf(" ");
        }
        printf("\n");
    }
}