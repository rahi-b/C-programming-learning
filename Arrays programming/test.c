#include <stdio.h>

//prime numbers deleting array;

// void main(){
//     int i,limit,a[100],flag=0,j;
//     printf("Enter your limit:\n");
//     scanf("%d",&limit);

//     printf("Enter your values:\n");
//     for(i=0;i<limit;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Deleted after array is this:\n");
//     for(i=0;i<limit;i++){
//         flag=0;
//         for(j=2;j<a[i];j++){
//             if(a[i]%j==0){
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==0){
//             for(j=i;j<limit;j++){
//                 a[j]=a[j+1];
//             }
//             limit--;
//             i--;
//         }
//     }
//         for(i=0;i<limit;i++){
//             printf("%d\t",a[i]);
//         }
// }

//unique elements in array;

// int main()
// { 
//    int a[100]={1,2,1,4,5,4,7,7,8};
//    int n=9,count,i,j,sum=0;

//    printf("your array is this:\n");
//    for(i=0;i<n;i++){
//     printf("%d\t",a[i]);
//    }

//   for(i=0;i<n;i++){
//     count=0;
//     for(j=0;j<n;j++){
//         if(i!=j){
//             if(a[i]==a[j]){
//                 count++;
//             }
//         }
//   }
//   if(count==0){
//     sum=sum+1;
//   }
// }
// printf("\nUnique elemnts count is %d\n",sum);
// }

