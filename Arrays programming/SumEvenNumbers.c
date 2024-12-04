#include <stdio.h>
void main(){
    int limit,i,sum=0,a[100];
    printf("Enter your limit:\n");
    scanf("%d",&limit);
    printf("Enter your values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);

    }
    for(i=0;i<limit;i++){
        if(a[i]%2!=0 && a[i]%3!=0 && a[i]%5!=0 && a[i]%7!=0){
            if(a[i]==2 || a[i]==3 || a[i]==5 || a[i]==7){
        
        sum=sum+a[i];}
        }
    }
    printf("Sum of this array:%d\t",sum);

}