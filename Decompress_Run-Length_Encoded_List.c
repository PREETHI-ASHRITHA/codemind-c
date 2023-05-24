#include <stdio.h>
int main()
{
    int n,ar[2001];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i+=2)
    {
        for(int j=0;j<ar[i];j++)
        {
            printf("%d ",ar[i+1]);
        }
    }
}