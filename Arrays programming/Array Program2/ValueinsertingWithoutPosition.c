#include <stdio.h>
// void main(){
//     int i,j,n,a[100],temp,value;
//     printf("Enter your limit:\n");
//     scanf("%d",&n);

//     printf("Enter your values:\n");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }

//     printf("This is your array:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("\nEnter adding value:\n");
//     scanf("%d",&value);

//     a[n]=value;

//     printf("\nAfter array is this:\n");

//     for(i=0;i<=n;i++){
//         printf("%d\t",a[i]);
//     }

//     for(i=0;i<=n;i++){
//         for(j=i+1;j<=n;j++){
//             if(a[i]>a[j]){
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }

//     printf("Swapping after array is this:\n");
//     for(i=0;i<=n;i++){
//         printf("%d\t",a[i]);
//     }


// }

void main(){
    int i,j,n=6,value,pos=0;
    int a[6]={10,20,30,50,60,70};

    printf("Enter your inserted value:\n");
    scanf("%d",&value);

    for(i=0;i<n;i++){
        if(a[i]<value && a[i+1]>value){
            pos=i+1;
        }
    }
    for(i=n+1;i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=value;
    
    for(i=0;i<=n;i++){
        printf("%d\t",a[i]);
    }

}