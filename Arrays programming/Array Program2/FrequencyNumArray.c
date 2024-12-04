#include <stdio.h>
void main(){
    int i,j,a[100],frequency=0,limit,b[100];
    printf("Enter your limi:\n");
    scanf("%d",&limit);

    printf("Enter your values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("Frequency is this:\n");

    for(i=0;i<limit;i++){
        frequency=1;
        if(a[i]!=-1){
        for(j=i+1;j<limit;j++){
            if(a[i]==a[j]){
                frequency++;
                a[j]=-1;
            }
        }
    b[i]=frequency;
        }
    }
    for(i=0;i<limit;i++){
        if(a[i]!=-1){
            printf("No of %d is %d time\n ",a[i],b[i]);
        }
    }
}