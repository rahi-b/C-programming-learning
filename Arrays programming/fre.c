#include <stdio.h>
void main(){
    int i,n,a[100],k,j,count,q;
    for(i=0;i<n;i++){
        q=0;
        count=1;
        for(k=i-1;k>=n;k--){
            if(a[i]==a[k]){
                count=0;
                q=1;
                continue;
            }
            for(j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    count++;
                }
            }

        }
        printf("%d is %d times",a[i],count);
    }
}