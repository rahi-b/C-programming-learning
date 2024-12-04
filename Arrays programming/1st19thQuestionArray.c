#include <stdio.h>
void main(){
    int i,limit,a[100];
    printf("Enter yiur limit:\n");
    scanf("%d",&limit);

    printf("Enter your values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("Reversed array:\n");
    for(i=limit-1;i>=0;i--){
        printf("%d\t",a[i]);
    }
}