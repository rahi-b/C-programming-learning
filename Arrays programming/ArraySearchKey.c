#include <stdio.h>
void main(){

    int i,limit,searchkey,a[100],flag=0;

    printf("Enter a array limit: \n");
    scanf("%d",&limit);
    printf("Enter a array values: \n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
        }

    printf("Enter a searching value: \n");
    scanf("%d",&searchkey);
    for(i=0;i<limit;i++){
        if(searchkey==a[i]){
            flag=1;
            break;
        }
    }

    if(flag==1)
        printf("your value are found at %d position",i+1);
    else
    printf("your value is not found");
}