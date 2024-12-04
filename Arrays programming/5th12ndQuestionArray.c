#include <stdio.h>
void main(){
    int limit,i,j,c=0,a[100];
    printf("Enter your limit of array:\n");
    scanf("%d",&limit);

    printf("Enter values of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("Unique elements in array:\n");
    for(i=0;i<limit-1;i++){
        c=0;
        for(j=0;j<limit;j++){
            if(i!=j){
                if(a[i]==a[j]){
                c++;
                break;
                }
                
                }
            
        }
    if(c==0){
        printf("%d\t",a[i]);
    }
    }

}