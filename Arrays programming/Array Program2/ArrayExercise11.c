#include <stdio.h>
void main(){
     int i,n=10,temp;
     int a[10]={1,2,3,4,5,6,7,8,9,10};

     printf("Array is this:\n");
     for(i=0;i<n;i++){
        printf("%d\t",a[i]);
     }

     for(i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
     }
     printf("\nReversed array is this:\n");
     for(i=0;i<n;i++){
        printf("%d\t",a[i]);
     }
     printf("\nArray is this:\n");
     for(i=0;i<n;i++){
        if(a[i]%3==0){
            a[i]=-1;
        }
        if(a[i]!=-1){
            printf("%d\t",a[i]);
        }
     }
     
}