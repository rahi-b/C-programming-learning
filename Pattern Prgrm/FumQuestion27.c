#include <stdio.h>
void main(){
      int i,j,k=1;
      for(i=1;i<=5;i++){
        k=i*2-1;
        for(j=1;j<=6-i;j++){
              printf("%d",k);
              k+=2;
        }
    printf("\n");
}
}