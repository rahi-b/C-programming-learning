#include <stdio.h>
void main(){
    int i,j,limit,flag,a[100],sum=0,p;
    float avg,l;
    printf("Enter limit:\n");
    scanf("%d",&limit);

    printf("Enter your values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("Prime numbers are this:\n");
    for(i=0;i<limit;i++){
        flag=0;
        for(j=2;j<a[i];j++){
                if(a[i]%j==0){
                    flag=1;
                    break;
                }
            }

        if(flag==0){
            sum=sum+a[i];
            p++;

        }
       

    }
     avg=sum/p;
        printf(" average is %f",avg);
    }

