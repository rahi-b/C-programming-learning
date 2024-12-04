#include <stdio.h>
void main(){
  int i,j,k=7;
  for(i=4;i>=0;i--){
    for(j=1;j<=i;j++){
        printf("%d",k);
        k++;
    }
    k--;
    k=k-2*(i-1);
    printf("\n");
  }
}