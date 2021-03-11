#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n%2==0)
    {
         for(i=1; i<=n/2; i++)
       {

            for(j=n/2; j>1; j--)
            {
                if(j == i)
                    printf("*");
                else
                    printf("_");
            }
            for(j=1; j<=n/2; j++)
            {
                if(j == i)
                    printf("*");
                else
                    printf("_");
            }
            printf("\n");
       }
        for(i=n/2; i>=1; i--)
       {

            for(j=n/2; j>1; j--)
            {
                if(j == i)
                    printf("*");
                else
                    printf("_");
            }
            for(j=1; j<=n/2; j++)
            {
                if(j == i)
                    printf("*");
                else
                    printf("_");
            }

            printf("\n");
       }
    }
    else
    {
         for(i=1; i<=n/2+1; i++)
       {

            for(j=n/2+1; j>1; j--)
            {
                if(j == i)
                    printf("*");
                else
                    printf("_");
            }
            for(j=1; j<=n/2+1; j++)
            {
                if(j == i)
                    printf("*");
                else
                    printf("_");
            }
            printf("\n");
       }
        for(i=n/2; i>=1; i--)
       {

            for(j=n/2+1; j>1; j--)
            {
                if(j == i)
                    printf("*");
                else
                    printf("_");
            }
            for(j=1; j<=n/2+1; j++)
            {
                if(j == i)
                    printf("*");
                else
                    printf("_");
            }

            printf("\n");
       }
    }
    return 0;
}
