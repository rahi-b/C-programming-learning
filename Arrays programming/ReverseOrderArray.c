#include <stdio.h>
void main(){
    int limit,i,a[100],j,temp;
    printf("Enter the size of array:\n");
    scanf("%d",&limit);

    printf("Enter the value of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }

    printf("Reversed array is this:\n");


    // for(i=0;i<limit/2;i++)
    // {  temp=a[limit-i-1];
    //    a[limit-i-1]=a[i];
    //    a[i]=temp;
    // }
    for(i=0;i<limit;i++){
        printf("%d\t",a[i]);
    }
}
// #include <stdio.h>
// void main(){

// int i,j,A;

// for(i=1;i<=7;i++){
// for(j=1;j<=i;j++){
// if(i%2==1){
// printf("%c",A);
// A++;
// }
// else if(i%2==0){
//   printf("%d",i);
// }
// }
// printf("\n");

// }

// }
