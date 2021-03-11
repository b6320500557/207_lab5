#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n%2==0)
    {
         for(i=1; i<=n/2; i++)
       {
            for(j=1; j<n; j++)
            {
                if(i == j)
                    printf("*");
                else
                    printf("_");

            }
            printf("\n");
       }
    }
    return 0;
}
