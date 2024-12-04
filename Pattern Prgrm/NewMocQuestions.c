#include <stdio.h>
//Questions in order base
//Question 1.

// void main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j==1 ||i==5||j==i){
//                 printf("%d",j);
//             }else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }

//Question 2.

// void main(){
//     int i,j,k;
//     for(i=1;i<=3;i++){
//         if(i==1){
//             printf("*\n");
//         }
//         for(k=1;k<=i;k++){
//             for(j=1;j<=i;j++){
//                 printf("*");
//             }
//             printf("\n");
//         }
//         for(j=1;j<=i*3;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

//Question 3

// void main(){
//     int i,j,k;
//     for(i=1;i<=3;i++){
//         for(j=1;j<=i*3;j++){
//             printf("* ");
//         }
//         if(i==3)
//         break;
//         for(k=1;k<=i;k++){
//             printf("\n*");
//         }
//         printf("\n");
//     }
// }

//Question 4

// void main(){
//     int i,j,k=50;
//     for(i=1;i<=4;i++){
//         for(j=1;j<=i;j++){
//             printf("%d ",k);
//             k-=5;
//         }
//         printf("\n");
//     }
// }

//Question 5

// void main(){
//     int  i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j==1 ||j==i || j==5){
//                 printf("*");
//             }else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }

//Question 6 

// void main(){
//     int i,j,k=1;
//     for(i=1;i<=9;i++){
//         for(j=1;j<=9;j++){
//             if(j==i || j==10-i){
//                 printf("%d",k);
//             }else
//             printf(" ");
//         }
//         i<5?k++:k--;
//         printf("\n");
//     }
// }

//Question 7 

// void main(){
//     int i,j,k;
//     for(i=1;i<=3;i++){

//         for(k=1;k<=2;k++){
//             for(j=1;j<=i*3;j++){
//                 printf("* ");
//             }
//             printf("\n");
//         }
//         if(i==3)
//         break;
//         for(k=1;k<=i;k++){
//             printf("*\n");
//         }
//     }
// }

//Question 8 

// void main(){
//     int i,j,k;
//     for(i=1;i<=9;i++){
//         i<=5?k++:k--;
//         for(j=1;j<=9;j++){
//             if(j==6-k ||j==4+k){
//                 printf("*");
//             }else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }

//Question 9

// void main(){
//     int i,j,k;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=9;j++){
//             if(j==6-i || j==4+i ||i==5){
//                 printf("*");
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }

//Question 10

// void main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(i==1||i==5||j==6-i){
//                 printf("*");
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
// }

//Question 11

// void main(){
//     int i,j,k,x;
//     for(i=1;i<=9;i++){
//         i<=5?k++:k--;
//         x=1;
//         for(j=1;j<=9;j++){
//             if(j>=k && j<=10-k && x){
//                 printf("*");
//                 x=0;
//             }
//             else{
//             printf(" ");
//             x=1;
//         }
//         }
//         printf("\n");
//     }
// }

//Question 12

// void main(){
//     int i,j,k;
//     for(i=1;i<=4;i++){
//         for(k=1;k<=1;k++){
//             printf("*\n");
//         }
//         for(k=1;k<=i;k++){
//             for(j=1;j<=3;j++){
//                 printf("* ");
//             }
//             printf("\n");
//         }
//         if(i==3)
//         break;
//     }
// }

//Question 13

void main(){
    int i,j,k;
    for(i=1;i<=3;i++){

        for(k=1;k<=i;k++){
            printf("*\n");
        }

        for(k=1;k<=i;k++){
            for(j=1;j<=i*2;j++){
                printf("* ");
            }
            printf("\n");
        }
    }
}