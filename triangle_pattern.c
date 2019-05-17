#include<stdio.h>
int main()
{
    int i,j,n;
   for(i=1;i<=11;i++)
    {
        for(j=1;j<=11;j++)
        {
            if(i+j==7 || abs(j-i)==5 || (i+j)==17  )
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
