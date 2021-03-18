#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    char x[n][1001];
    for(i=0; i<n; i++)
    {
        for(j=0; j<1000; j++)
        {
            scanf("%s",x[i][j]);
        }

    }
    for(i=0; i<n; i++)
    {
          for(j=0; j<1000; j++)
        {
            printf("%s ",x[i][j]);
        }
    }
    return 0;
}
