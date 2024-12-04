#include <stdio.h>
void main(){
    int i,limit,a[100],pos,value;
    printf("Enter your limit:\n");
    scanf("%d",&limit);

    printf("Enter values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter your insert position:\n");
    scanf("%d",&pos);

    printf("Enter your value:\n");
    scanf("%d",&value);

    for(i=limit-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=value;

    printf("Inserted array is this:\n");
    for(i=0;i<=limit;i++){
        printf("%d\t",a[i]);
    }
}