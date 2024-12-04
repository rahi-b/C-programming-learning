#include <stdio.h>
void main(){
    int limit,a[100],b[100],c[100],i,j=0,k=0;
    printf("Enter limit of array:\n");
    scanf("%d",&limit);
    printf("Enter a array values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
        if(a[i]%2==0){
            b[j]=a[i];
            j++;
        }else{
            c[k]=a[i];
            k++;
        }
    }
    printf("Even number are this:\n");
    for(i=0;i<j;i++){
        printf("%d\t\n",b[i]);
    }
    printf("Odd numbers are this:\n");
    for(i=0;i<k;i++){
        printf("%d\t",c[i]);
    }
}