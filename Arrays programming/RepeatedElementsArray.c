#include <stdio.h>
void main(){
    int i,j,limit,a[100],c=0;
    printf("Enter limit of array:\n");
    scanf("%d",&limit);
    printf("Enter values of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<limit-1;i++){
        c=1;
        for(j=i+1;j<limit;j++){
            if(a[i]==0){
            continue;
           } else if(a[i]==a[j]){
                c++;
                a[j]=0;
            }
        }
    
        if(c>1){
            printf("\n%d repeated %d times",a[i],c);
    }
    }
    
}