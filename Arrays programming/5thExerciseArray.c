#include <stdio.h>
void main(){
    int limit,i,j,c,a[100];
    printf("Enter your limit:\n");
    scanf("%d",&limit);

    printf("Enter your values of array:\n");
    for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(a[i]==a[j]){
                c++;
                break;
            }
        }
        printf("Duplicate element number in array:%d\n",c);
}
    }
    