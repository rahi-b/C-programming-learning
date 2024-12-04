#include <stdio.h>
void main(){
    int i,j,n=10,flag=0,c=0,sum=0;
    int a[10]={10,2,30,2,40,5,60,5,70,5};
    float avg=0;

    printf("Array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    for(i=0;i<n;i++){
      flag=0;
      for(j=0;j<n;j++){
        if(i!=j){
            if(a[i]==a[j]){
                flag=1;
            }
        }
      }
      if(flag==0){
        c++;
        sum=sum+a[i];
        printf("\n%d\t",a[i]);
      }
     
    }
    avg=sum/c;

    printf("\nAverage unique numbers: %f",avg);
}