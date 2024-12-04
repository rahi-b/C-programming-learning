#include <stdio.h>
// void main(){
//     int i,j,k=65;
//     for(i=1;i<=7;i++){
//         for(j=1;j<=i;j++){
//             if(i%2==1){
//             printf("%c",k);
//         }else
//         printf("%d",i/2);
//     }
//     if(i%2==1)
//     k++;
//     printf("\n");
// }
// }

void main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        k=i;
        for(j=1;j<=9;j++){
            if(j>=6-k && j<=4+k){
            printf("%d",k);
            j<5?k++:k--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}