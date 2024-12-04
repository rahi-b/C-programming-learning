#include <stdio.h>
void main(){
    int i,limit,a[100],s1,s2;

    printf("Enter your limit:\n");
    scanf("%d",&limit);

    printf("Enter values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<limit;i++){
        if(a[i]<s1){
            s2=s1;
            s1=a[i];
        }
        else if(a[i]>s1 && a[i]<s2){
            s2=a[i];
        }
    }
    printf("\nFirst small letter is %d:",s1);
    printf("\nSecond small letter is %d:",s2);
}