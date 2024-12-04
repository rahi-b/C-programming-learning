#include <stdio.h>
void main(){
    int a[5]={10,35,23,54,57};
    int n=5;
    int i,min;

    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    min=a[0];
    for(i=1;i<n;i++){
    if(a[i]<min){
        min=a[i];
    }
    }

    printf("\nSmallest elemnt array:\n%d",min);




}