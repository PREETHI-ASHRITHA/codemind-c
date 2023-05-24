#include <stdio.h>
int main()
{
    int n,i,j,c;
    scanf("%d",&n); 
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(ar[j]<ar[i] && i!=j)
            {
                c++;
            }
        }
        printf("%d ",c);
    }
    
}