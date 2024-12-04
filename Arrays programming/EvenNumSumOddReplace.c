 #include <stdio.h>
 void main(){
    int limit,i,a[100],sum=0;
    printf("Enter your limit of array:\n");
    scanf("%d",&limit);

    printf("Enter your values of array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
        if(a[i]%2==0){
            sum=sum+a[i];
        }else
        a[i]=1;
 }for(i=0;i<limit;i++){
    if(a[i]==1){
    printf("* ");
 }else{
    printf("%d\t",a[i]);
 }
 }
 printf("\nsum of even numbers:%d",sum );
 
 
 }