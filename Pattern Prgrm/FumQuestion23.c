#include <stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=2;j<=8-i;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    printf("1");
                }else{
                    printf("0");
                }
            }else{
                if(j%2==1)
                {
                    printf("1");
                }else{
                    printf("0");
                }
            }
        }
        printf("\n");
    }

}