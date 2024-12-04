//sorted array inserting value witout position
#include <stdio.h>
void main(){
    int i,j,limit,value,a[100],temp;
    printf("Enter your limit:\n");
    scanf("%d",&limit);

    printf("Enter your value:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    printf("Enterd array is this:\n");
    for(i=0;i<limit;i++){
        printf("%d\t",a[i]);
    }

    printf("\nEnterd value:\n");
    scanf("%d",&value);

    a[limit]=value;

    for(i=0;i<limit;i++){
        for(j=i+1;j<limit+1;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("After array is:\n");
    for(i=0;i<=limit;i++){
        printf("%d\t",a[i]);
    }

}