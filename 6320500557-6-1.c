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
        scanf("%s",x[i]);
    }
    for(i=0; i<n; i++)
    {
          for(j=i; j<strlen(x[i]); j++)
        {
            printf("%c",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
