#include <stdio.h>
void main(){
    int i,j,k=1,y=65,x=1;;
     for(i=1;i<=4;i++){
         x=1;
         k=1;
         y=65;
        for(j=1;j<=7;j++){
            if(j>=5-i && j<=3+i && x){
                if(i%2==1){
                    printf("%d",k++);
                }
                else{
                    printf("%c",y++);
                }
                x=0;
            }else{
            printf(" ");
            x=1;
            }
        }
        printf("\n");
}
}
    
