#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x,i,j=0,k[n],m,p[n],l=0;
    scanf("%d",&x);
    scanf("%d",&m);
    for(i=1; i<=n; i++)
    {
        k[i] = 0;
        p[i] = 0;
    }
     for(i=1; i<=n; i++)
    {
        k[i] =x%10;
        x /= 10;
        p[i] = m%10;
        m /= 10;
       if(k[i] == p[i])
        {
             l++;
             j = i;
        }
    }
    printf("%d %d",l,j);

     return 0;
}
