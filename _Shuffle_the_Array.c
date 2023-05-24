#include <stdio.h>
int main()
{
    int n,arr[2004],br[2001],r,i,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        br[j++]=arr[i];
        br[j++]=arr[r+i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",br[i]);
    }
}