#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    char x[n][1001],m=0,k[n];
    for(i=0; i<n; i++)
    {
        scanf("%s",x[i]);
    }
    for(i=0; i<n; i++)
    {
        if(x[i] > x[i+1])
        {
            strcpy (k[i],x[i]);
        }
        else
        {
            strcpy (k[i],x[i+1]);
        }
    }
    for(i=0; i<n; i++)
    {
       printf("%s",k[i]);
        printf("\n");
    }


    return 0;
}
