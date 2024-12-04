#include <stdio.h>
void main(){
    int i,j,a[10][10],limit;

printf("Enter limit of array:");
scanf("%d",&limit);
printf("Enter values of array:");
for(i=0;i<3;i++){
    for(j=0;j<limit;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("Enterd values is:\n");
for(i=0;i<3;i++){
    for(j=0;j<limit;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
}