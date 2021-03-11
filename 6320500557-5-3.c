#include <stdio.h>
int main()
{
    int n,i,j=1,x;
    scanf("%d",&n);
    int m[n];
    for(i=1;;i++)
    {
        if(i%2==0 || i%3==0 || i%5==0)
        {
           //printf("%d ",i);
           m[i] = i;
            j++;
        }
        if(i == n)
            break;
    }
    for(i=1; i<=j; i++)
    {
        printf("%d ",m[i]);
    }

    //printf("%d",j);

    return 0;
}
