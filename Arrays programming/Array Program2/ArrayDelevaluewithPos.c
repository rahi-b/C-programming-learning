#include <stdio.h>
void main(){
    int i,j,n=6,pos;
    int a[6]={2,3,5,7,9,0};

    printf("Your array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    printf("\nEnter Array delete position \n");
    scanf("%d",&pos);

    for(i=pos-1;i<=n-1;i++){
        a[i]=a[i+1];
    }

    printf("After array is this:\n");
    for(i=0;i<n-1;i++){
        printf("%d\t",a[i]);
    }
}