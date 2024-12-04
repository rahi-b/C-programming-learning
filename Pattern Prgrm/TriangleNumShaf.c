#include <stdio.h>
void main(){
    int i,j,x,k;
    for(i=1;i<=6;i++){
        x=1;
        k=1;
        for(j=1;j<=11;j++){
            if(j>=7-i && j<=5+i &&x){
                printf("%d",k);
                k++;
                x=0;
            }else{
                printf(" ");
                x=1;
            }
        }
        printf("\n");
    }
}

// void main(){
//     int i,j,k,z=1;
//     for(i=1;i<=8;i++){
//         if(i!=5){
//         i<=5?k++:k--;
//         }
//         for(j=1;j<=7;j++){
//             if(j<=k*2-1 ){
//                 if(j%2==1){
//                 printf("%d",z);
//                 z++;
//                 }else{
//                     printf("*");

//                 }
//                  }
//         }
//         printf("\n");
//     }
// }
