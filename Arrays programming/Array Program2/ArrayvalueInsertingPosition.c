#include <stdio.h>

void main(){

    int i,j,limit,pos,val,a[100];

    printf("Enter your limit:\n");
    scanf("%d",&limit);
    
    printf("Enter your values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter your value add position:\n");
    scanf("%d",&pos);

    printf("Enter your adding value:\n");
    scanf("%d",&val);

    for(i=limit-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=val;

    printf("After array iss this:\n");
    for(i=0;i<=limit;i++){
        printf("%d\t",a[i]);
    }
}