#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,x[n][2];
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
            printf("%d ",x[i][j]);
        }
        printf("\n");

    }
    return 0;
}
