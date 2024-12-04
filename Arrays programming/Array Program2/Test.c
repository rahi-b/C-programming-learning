#include <stdio.h>
//value inserting with position
// void main(){
//     int i,n,a[100],pos,value;

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
//     printf("Enter your adding value:\n");
//     scanf("%d",&value);

//     printf("Enter your adding position:\n");
//     scanf("%d",&pos);

//     for(i=n-1;i>=pos-1;i--){
//         a[i+1]=a[i];
//     }
//     a[pos-1]=value;

//     printf("Value adding after array is this:\n");
//     for(i=0;i<=n;i++){
//         printf("%d\t",a[i]);
//     }

//     }

//Deleting value with position

// void main(){
//     int i,n=6,pos;
//     int a[6]={10,20,30,40,50,60};

//     printf("This your array:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }

//     printf("\nEnter deleting pos:\n");
//     scanf("%d",&pos);

//     for(i=pos-1;i<n-1;i++){
//         a[i]=a[i+1];
//     }
//     printf("after array is this:\n");
//     for(i=0;i<n-1;i++){
//         printf("%d\t",a[i]);
//     }
// }

//prime numbers

// void main(){
//     int i,j,n,a[100],flag=0;
//     printf("Enter your limit:\n");
//     scanf("%d",&n);

//     printf("Enter your values:\n");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("This your array\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("Prime numbers are this:\n");
//     for(i=0;i<n;i++){
//         flag=0;
//         for(j=2;j<a[i];j++){
//             if(a[i]%j==0){
//                 flag=1;
//                 break;
//                 }
//         }
//         if(flag==0){
//             printf("%d\t",a[i]);
//         }
//     }
//     }

// void main(){
//     int i,j,n=10,flag=0,b[10];
//     int a[10]={1,2,3,1,4,3,5,7,6,7};

//     printf("Your array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
    
//     for(i=0;i<n;i++){
//         flag=1;
//         if(a[i]!=-1){
//             for(j=0;j<n;j++){
//                 if(i!=j){
//                     if(a[i]==a[j]){
//                         flag++;
//                         a[j]=-1;
//                     }
//                 }
//             }
//             b[i]=flag;
//         }
//     }
//     for(i=0;i<n;i++){
//         if(a[i]!=-1){
//             printf("\nNo of %d is %d time",a[i],b[i]);
//         }
//     }

// }

// void main(){
//     int i,j=0,c=0,n=10,b[5],k[5];
//     int a[10]={1,2,3,4,5,6,7,8,9,10};

//     printf("Array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }

//     for(i=0;i<n;i++){
//         if(a[i]%2==0){
//             b[j]=a[i];
//             j++;
//         }else{
//             k[c]=a[i];
//             c++;
//         }
//     }
//     printf("\nEven number is:\n");
//         for(i=0;i<j;i++){
//             printf("%d\t",b[i]);
//         }

//     printf("\nOdd numbers is:\n");
//     for(i=0;i<c;i++){
//         printf("%d\t",k[i]);

//     }
//     }

// void main(){
//     int i,j,n1=5,n2=5,n3;
//     int a1[5]={1,2,3,4,5};
//     int a2[5]={6,7,8,9,10},a3[10];

//     printf("First array is this:\n");
//     for(i=0;i<n1;i++){
//         printf("%d\t",a1[i]);
//     }

//     printf("\nSecnd array is this:\n");
//     for(i=0;i<n2;i++){
//         printf("%d\t",a2[i]);
//     }
//     n3=n1+n2;

//     for(i=0;i<n1;i++){
//         a3[i]=a1[i];

//     }

//     for(j=0;j<n2;j++){
//         a3[i]=a2[j];
//         i++;
//     }

//     printf("\nMerged array is this:\n");
//     for(i=0;i<n3;i++){
//         printf("%d\t",a3[i]);
//     }
// }

// void main(){
//     int i,j,n=8,value;
//     int a[8]={1,2,4,5,8,9,10,12};

//     printf("Your array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }

//     printf("\nEnter your adding value:\n");
//     scanf("%d",&value);
//     a[n]=value;

//     printf("After array is this:\n");
//     for(i=0;i<=n;i++){
//         printf("%d\t",a[i]);
//     }

// }

// void main(){

//     int i,n=6,value,pos=0;
//     int a[6]={1,3,4,5,6,9};
//      printf("Your array is this:\n");
//      for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//      }

//      printf("\nEnter your adding value:\n");
//      scanf("%d",&value);

//      if(a[i]<value && a[i+1]>value){
//         pos=i+1;
//      }

//      for(i=n+1;i>pos;i--){
//         a[i]=a[i-1];
//      }
//      a[pos]=value;

//      printf("\nAfter array is this:\n");
//      for(i=0;i<=n;i++){
//         printf("%d\t",a[i]);
//      }
// }

// void main(){
//     int i,n=8,l1=0,l2=0;
//     int a[8]={11,3,6,8,9,5,10,18};

//     printf("Your array is this\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);    
//         }

//         for(i=0;i<n;i++){
//             if(a[i]>l1){
//                 l2=l1;
//                 l1=a[i];
//             }else if(a[i]<l1 && a[i]>l2){
//                 l2=a[i];

//             }
//         }
//         printf("\nsecond largset element is %d",l2);
// }


// void main(){
//     int i,n=8,s1,s2;
//     int a[8]={11,3,6,8,9,5,10,18};

//     printf("Your array is this\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);    
//         }

//         for(i=0;i<n;i++){
//             if(a[i]<s1){
//                 s2=s1;
//                 s1=a[i];
//             }else if(a[i]>s1 && a[i]<s2){
//                 s2=a[i];

//             }
//         }
//         printf("\nsecond smallest element is %d",s1);
// }

// void main(){
//     int i,n=5,min;
//     int a[5]={2,1,5,8,10};

//     printf("Array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }

//     min=a[0];
//     for(i=0;i<n;i++){
//         if(a[i]<min){
//             min=a[i];
//         }
//     }
//     printf("\nSmallest elemnt is %d:",min);
// }


// void main(){
//     int i,n=8,pos,value;
//     int a[8]={1,3,4,5,6,7,8,9};

//     printf("Array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }

//     printf("\nenter position:\n");
//     scanf("%d",&pos);

//     printf("\nEnter value:\n");
//     scanf("%d",&value);

//     for(i=n-1;i>=pos-1;i--){
//         a[i+1]=a[i];
//     }
//     a[pos-1]=value;

//     printf("\nAfter array is this:\n");
//     for(i=0;i<=n;i++){
//         printf("%d\t",a[i]);
//     }
// }

// void main(){
//     int i,n=8,pos;
//     int a[8]={1,3,4,5,6,7,8,9};

//     printf("Array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }

//     printf("\nenter position:\n");
//     scanf("%d",&pos);

//     for(i=pos-1;i<=n-1;i++){
//         a[i]=a[i+1];
//     }

//     printf("\nAfter array is this:\n");
//     for(i=0;i<n-1;i++){
//         printf("%d\t",a[i]);
//     }
// }

// void main(){
//     int i,j,n=10,flag=0,c=0;
//     int a[10]={1,2,3,4,5,6,7,8,9,10};

//     printf("Array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("\nPrime number is:\n");
//     for(i=0;i<n;i++){
//         flag=0;
//         for(j=2;j<a[i];j++){
//             if(a[i]%j==0){
//                 flag=1;
//             }
//         }
//         if(flag==0 && a[i]!=1){
//             c++;
//             printf("%d\t",a[i]);
//         }
//     }
//     printf("\nPrime numbers count is %d",c);
// }

// void main(){
//     int i,j,n=10,flag=0,sum=0,c=0;
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     float avg=0;

//     printf("Array is this:\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
//     printf("\nPrime number is:\n");
//     for(i=0;i<n;i++){
//         flag=0;
//         for(j=2;j<a[i];j++){
//             if(a[i]%j==0){
//                 flag=1;
//             }
//         }
//         if(flag==0 && a[i]!=1){
//             c++;
//             sum=sum+a[i];
//             printf("%d\t",a[i]);
//         }
//     }
//     avg=sum/c;
//     printf("\nSum of prime numbers:%d",sum);
//     printf("\nAverage of prime numbers: %f",avg);
// }

void main(){
    int i,j,n=8,temp=0;
    int a[8]={0,2,0,3,4,0,0,8};
    printf("Enter your array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==0){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    printf("After array is this:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}