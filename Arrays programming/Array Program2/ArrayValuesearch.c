#include <stdio.h>
void main(){
    int i,n,a[100],searchkey=0;
    printf("Enter your limit:\n");
    scanf("%d",&n);

    printf("Enter your values:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("This your array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    printf("\nEnter your serching value:\n");
    scanf("%d",&searchkey);

    for(i=0;i<n;i++){
        if(a[i]==searchkey){
            printf("Your serching %d value found at position %d ",a[i],i+1);
        }
    }
}