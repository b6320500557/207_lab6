#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,x[n][2],k[n],m=0,l=0;
     for(i=1; i<=n; i++)
    {
        k[i] = 0;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
     for(i=1; i<=n; i++)
    {
        for(j=1; j<=2; j++)
        {
           if(x[i] == x[i+1])
           {
               m++;
           }
        }
    }
    printf("%d",m);

    return 0;
}
