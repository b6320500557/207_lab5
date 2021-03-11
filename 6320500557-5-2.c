#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n%2==0)
    {
         for(i=1; i<=n/2; i++)
       {
            for(j=n/2; j>=i; j--)
            {
                if(i<j)
                    printf("_");
                else
                    printf("*");
            }
             for(j=i; j<n/2; j++)
            {
                if(i<j)
                    printf("_");
                else
                    printf("*");
            }
            printf("\n");
       }
    }
    return 0;
}
