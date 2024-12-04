#include <stdio.h>
void main(){
    int a[100],i,j,flag=0,limit,sum=0;
    printf("Enter your limit:\n");
    scanf("%d",&limit);

    printf("Enter your values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    printf("\nArray unique elemnts are this:\n");

    for(i=0;i<limit;i++){
        flag=0;
        for(j=0;j<limit;j++){
            if(i!=j){
                if(a[i]==a[j]){
                    flag=1;
                    break;
                }
            }
        }if(flag==0){
            // count++;
            printf("%d\t",a[i]);
            sum+=a[i];
        }
    }
}
//     //   printf("\nUnique numbers count is:%d",count);
// }
//     //         sum=sum+a[i];
//     //     }
    //     avg=sum/count;
    // }
    // printf("Unique numbers average is this ='%f",avg);

    //         for(j=i;j<limit;j++){
    //             if(a[j]=a[j+1]);
    //         }
    //         limit--;
    //         i--;
    //     }
    // }
    // printf("after your array is this:\n");
    // for(i=0;i<limit;i++){
    //     printf("%d\t",a[i]);
    // }
