#include <stdio.h>
void main(){
    int num,i;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        printf("%d*%d=%d \n",i,num,num*i);
    }
}