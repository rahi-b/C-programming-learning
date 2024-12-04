#include <stdio.h>
void main(){
    float mark,limit=100;
    printf("Enter your mark");
    scanf("%f",&mark);

    if(mark>limit)
    printf("You are wrong");
    else if(mark>=50)
    printf("your passed");
    else
    printf("your failed");
}