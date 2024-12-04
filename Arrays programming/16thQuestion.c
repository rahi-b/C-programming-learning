#include <stdio.h>
void main(){
    int i,j,limit,a[100],c=0,sum=0;
    printf("Enter limit:\n");
    scanf("%d",&limit);

    printf("Enter values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("Array is this:\n");
    for(i=0;i<limit;i++){
        printf("%d\t",a[i]);
    }
    printf("Unique elements is this:\n");
    for(i=0;i<limit;i++){
        c=0;
        for(j=0;j<limit;j++){
            if(i!=j){
              if(a[i]==a[j]){
                c++;
                }
            }
        }
    
    if(c==0){
        sum=sum+1;
    }
    
    }
    printf("Count of unique numbers:\n%d",sum);
}