#include <stdio.h>
// void main(){
//     int i,j,k=0;
//     for(i=1;i<=4;i++){
//         k=1;
//     for(j=1;j<=8;j++){
//      if(j<=i || j>=9-i){
//     printf("%d",k);
//      if(j<=4)
//         k++;
//         else
//         k--;
//     }else
//     printf("*");
//     if(j==4)
//     k--;

//     }
//     printf("\n");
//     }
// }
void main(){
    int i,j;
    char c=65;
    for(i=1;i<=7;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("%d",i/2);
            }else{
                printf("%c",c);
            }
        }
            if(i%2==0)
            c++;

        printf("\n");
    }
}