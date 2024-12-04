#include <stdio.h>
void main(){
    int limit,i,a[100],l1,l2;
    printf("Enter limit of array:\n");
    scanf("%d",&limit);

    printf("Enter limit of values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
        if(a[i]<l1){
            l2=l1;
            l1=a[i];
        }else if(a[i]<l2 && a[i]>l1){
            l2=a[i];
        }
    }
    printf("smallest element%d:\n",l1);
    printf("2nd Smallest elements:%d\n",l2);
}