#include <stdio.h>
void main(){
    int i,j=0,n=8,b[4],c[4],k=0;
    int a[8]={1,2,3,4,5,6,7,8};

    printf("Array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]%2==0){
            b[j]=a[i];
            j++;
             }
             else{
             c[k]=a[i];
             k++;
             }
}
    printf("\nEven numbers are this:\n");
    for(i=0;i<j;i++){
        printf("%d\t",b[i]);
    }
    printf("\nOdd numbers are this:\n");
    for(i=0;i<k;i++){
        printf("%d\t",c[i]);
    }
}