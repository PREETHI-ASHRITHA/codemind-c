#include <stdio.h>
int main()
{
    int n,ar[20001],i,j,k,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(ar[i]==k)
         {
             c++;
             printf("%d",i);
         }
    }
    if(c==0 && ar[i]!=k)
    {
        printf("-1");
    }
    
}