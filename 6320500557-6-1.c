#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,temp[1000];
    char x[n][1001],m=0,k[n];
    for(i=0; i<n; i++)
    {
        scanf("%s",x[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(strcmp(x[j], x[j + 1]) == 1)
            {
                strcpy(temp, x[j]);
                strcpy(x[j], x[j + 1]);
                strcpy(x[j + 1], temp);
            }
        }

    }
    for(i=0; i<n; i++)
    {
        printf("%s\n", x[i]);
    }
    return 0;
}
