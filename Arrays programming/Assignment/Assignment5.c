#include <stdio.h>
void main(){
    float Totalmark;
    printf("Enter your total mark:");
    scanf("%f",&Totalmark);
    if(Totalmark>=90)
    printf("A grade");
    else if(Totalmark>=80 && 89)
    printf("B grade");
    else if(Totalmark>=70 && 79)
    printf("C grade");
    else if(Totalmark>60 &&69)
    printf("D grade");
    else if(Totalmark>50 && 59)
    printf("E grade");
    else
    printf("Your failed");
}