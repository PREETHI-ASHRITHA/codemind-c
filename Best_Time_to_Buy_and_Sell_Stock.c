#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,ar[2001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int min,max,k;
    min=ar[0];
    for(i=0;i<n;i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
            k=i;
            break;
        }
    }
    max=min;
    for(i=k;i<n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }
    printf("%d",max-min);
    
}