#include <stdio.h>
void main(){
    int i,j,limit,c=0,a[100];
    printf("Enter your limit:\n");
    scanf("%d",&limit);

    printf("Enter your values of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    printf("Unique element are this:\n");
    for(i=0;i<limit-1;i++){
        c=0;
        for(j=0;j<limit;j++){
            if(i!=j){
                if(a[i]==a[j]){
                    c++;
                }
            }
        }

        if(c==0)
            printf("%d",a[i]);
    }
        
}