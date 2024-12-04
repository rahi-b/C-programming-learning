#include <stdio.h>
void main(){
    int i,j,even,odd,n=8,sum=0;
    int a[8]={1,2,3,4,5,6,7,8};
    printf("You array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nArray change after this:\n");
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            sum=sum+a[i];
      }else
      a[i]=1;
    }
      for(i=0;i<n;i++){
        if(a[i]==1){
            printf("* ");
        }else{
      printf("%d\t",a[i]);
        }
      }

    printf("\nSum of even numbers= %d",sum);


}
