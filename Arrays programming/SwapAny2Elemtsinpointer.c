#include <stdio.h>
void main(){
    int limit,i,a[100],temp;
    printf("Enter limit of array:\n");
    scanf("%d",&limit);

    printf("Enter value of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<limit;i++){
        temp=*(a+0);
        *(a+0)=*(a+4);
        *(a+4)=temp;
    }
    printf("Changed array are this:\n");
    for(i=0;i<limit;i++){
        printf("%d\t",a[i]);
    }

}