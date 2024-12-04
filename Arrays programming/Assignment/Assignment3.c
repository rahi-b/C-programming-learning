#include <stdio.h>
void main(){
    int P;
    float R,n,SI=0;
    printf("Enter a principle amount : ");
    scanf("%d",&P);
    printf("Enter a interest rate : ");
    scanf("%f",&R);
    printf("Enter number of years : ");
    scanf("%f",&n);
    SI=P*R*n/100;
    printf("simple interest is : %f",SI);

}