//sorted array inserting value
#include <stdio.h>
void main(){
    int i,j,a[100],limit,position,value;
    printf("Enter your limit:\n");
    scanf("%d",&limit);

    printf("Enter values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter insert value:\n");
    scanf("%d",&value);

    for(i=0;i<limit;i++){
        if(a[i]>value ){
            position=i;
            break;
        }
    }
    for(i=limit+1;i>position;i--){
        a[i]=a[i-1];
    }
      a[position ]=value;
    printf("After inserting array:\n");
    for(i=0;i<=limit;i++){
        printf("%d\t",a[i]);
    }
}