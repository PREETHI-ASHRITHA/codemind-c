#include <stdio.h>
int main()
{
    int ar[1000],i,n,t,x,y,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(ar[i]==t)
        {
            c++;
            x=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(ar[i]==t)
        {
            y=i;
            break;
        }
    }
    if(c!=0)
    {
        printf("%d %d",x,y);
    }
    else
    {
        printf("-1 -1");
    }
    
}