#include <stdio.h>
void main(){
    int i,j,limit,a[100],l1,l2;

    printf("Enter your limit:\n");
    scanf("%d",&limit);

    printf("Enter your values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<limit;i++){
        if(a[i]>l1){
            l2=l1;
            l1=a[i];
        }
        else if(a[i]<l1 && a[i]>l2){
            l2=a[i];
        }
    }
    printf("\nFirst large leter is %d ",l1);
    printf("\nSecond large leter is %d ",l2);
}