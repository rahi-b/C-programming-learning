#include <stdio.h>

// Question 1

// void main(){
//     int i,j,n=10;
//     int a[10]={1,2,3,4,5,6,7,8,9,10};

//     printf("Your array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }

//     for(i=0;i<n;i++){
//         if(a[i]%3==0){
//             // for(j=i;j<n;j++){
//             //     a[j]=a[j+1];
//             // }
//             // n--;
//             // i--;
//             a[i]=-1;
//         }
//         if(a[i]!=-1){
//             printf("%d\t",a[i]);
//         }
//     } 
//     printf("\nAfter array is this:\n");
//     // for(i=0;i<n;i++){
//     //     printf("%d\t",a[i]);
//     }

//Question 2

// void main(){
//     int i,j,flag=0,n=10;
//     int a[10]={1,2,3,1,3,4,5,6,5,7};

//     printf("Your array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("\nAfter array is this:\n");
//     for(i=0;i<n;i++){
//         flag=0;
//         for(j=0;j<n;j++){
//             if(i!=j){
//                 if(a[i]==a[j]){
//                     flag=1;
//                     break;
//                 }
//             }
//         }
        
//         if(flag==0){
//             printf("%d\t",a[i]);
//         }
//     }
// }

//Question 3

// void main(){
//     int i,j,n=10;
//     int a[10]={1,2,1,3,5,4,3,6,6,7};

//     printf("Array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("\nAfter array is this:\n");
//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(a[i]==a[j]){
//                 a[i]=-1;
//             }
//         }
//         if(a[i]!=-1){
//             printf("%d\t",a[i]);
//         }
//     }
// }

//Question 4

// void main(){
//     int i,j,n=10,flag=0;
//     int a[10]={1,2,3,4,5,6,7,8,9,10};

//     printf("Array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }

//     for(i=0;i<n;i++){
//         flag=0;
//         for(j=2;j<a[i];j++){
//             if(a[i]%j==0){
//                 flag=1;
//             }
//         }if(flag==0 && a[i]!=1){
//             a[i]=1;
//         }else
//         a[i]=0;
//     }
//     printf("\nAfter array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
// }

// Question 5

// void main(){
//     int i,n=10;
//     int a[10]={1,2,5,7,8,15,16,18,20,225};

//     printf("Array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
//     for(i=0;i<n;i++){
//         if(a[i]%5==0){
//             a[i]=10;
//         }
//     }
//     printf("\nAfter array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
// }

// Question 6 

// void main(){
// int i,j,count=0,n=10,flag=0;
// int a[10]={1,2,3,1,3,4,5,6,4,7};

// for(i=0;i<n;i++){
//     printf("%d\t",a[i]);
// }

// for(i=0;i<n;i++){
//     count=0;
//     for(j=0;j<n;j++){
//         if(i!=j){
//             if(a[i]==a[j]){
//                 count=1;
//         }
//     }
//     }
//     if(count==0){
//         flag++;
//     }
// }
// printf("\nCount of Unique elemnts: %d ",flag);
// }

//Question 7

void main(){
    int i,j,n=11,c=0;
    int a[11]={1,2,1,3,4,5,4,6,6,7,6};

    printf("Array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    for(i=0;i<n;i++){
        c=0;
        for(j=i+1;j<n;j++){
            if(a[i]!=-1){
                if(a[i]==a[j]){
                    c++;
                }
            }
        }
        if(c==1){
            printf("\n%d-%d",a[i],c);
            a[j]=-1;
        }
    }
}
// Question 8 

// void main(){
//     int i,n=12;
//     int a[12]={2,5,6,7,8,10,11,13,15,17,18,20};

//     printf("Array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("\nAfter array is this:\n");
//     for(i=0;i<n;i++){
//         if(a[i]%5==0){
//             a[i+1]=-1;
//             a[i+2]=-1;
//         }
//         if(a[i]!=-1){
//             printf("%d\t",a[i]);
//         }
//     }
// }

//Question 9

// void main(){
//     int i,j,n=10,flag=0,temp;
//     int a[10]={1,2,3,2,4,5,4,7,6,7};

//     printf("Array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }

//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(a[i]>a[j]){
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }

//     printf("\nSorted after array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("\nUnique elements is this:\n");
//     for(i=0;i<n;i++){
//         flag=0;
//         for(j=0;j<n;j++){
//             if(i!=j){
//                 if(a[i]==a[j]){
//                     flag=1;
//                     break;
//                 }
//             }
//         }
//         if(flag==0){
//             printf("%d\t",a[i]);
//         }
//     }
// }

//Question 10

// void main(){
//     int i,j,flag=0,n=10;
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//      printf("Array is this:\n");
//      for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//      }

//      for(i=0;i<n;i++){
//         flag=0;
//         for(j=2;j<a[i];j++){
//             if(a[i]%j==0){
//                 flag=1;
//             }
//         }
//         if(flag==0 && a[i]!=1){
//             a[i]=0;
//         }
//      }
//      printf("\nAfter array is this:\n");

//      for(i=0;i<n;i++){
//             printf("%d\t",a[i]);
        
//      }
// }

//Question 12

// void main(){
//     int i,j,c=0,n=8;
//     int a[8]={1,2,1,3,4,3,5,4};

//     printf("Array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }

//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(a[i]==a[j]){
//                 c++;
//             }
//         }
//     }
//     printf("\nCount of duplicate elements: %d",c);
// }