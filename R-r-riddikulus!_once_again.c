#include <stdio.h>
int main()
{
    int a,n,arr[2001],br[2004],r,b=0;
    scanf("%d",&n);
    scanf("%d",&a);
    for(r=0;r<n;r++)
    {
        scanf("%d",&arr[r]);
        if(r>=a)
        {
            printf("%d ",arr[r]);
        }
    }
    for(r=0;r<a;r++)
    {
        printf("%d ",arr[r]);
    }
}