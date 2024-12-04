#include <stdio.h>
void main(){
    int i,j,n=9,count=0;
    int a[9]={1,2,1,3,4,3,5,8,4};

    printf("Your array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    // printf("\nArray duplicate elements are this:\n");

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                a[i]=-1;
            }
        }
    }
    printf("\nAfter array is this:\n");
    for(i=0;i<n;i++){
        if(a[i]!=-1){
            printf("%d\t",a[i]);
        }
    }
    // printf("\nDuplicate Elements count is this: %d ",count);
//                 for(j=i;j<n;j++){
//                     a[j]=a[j+1];
//                 }
//                 n--;
//                 i--;
//             }
//     }
// }
//     printf("\nDleted After array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
// }
}