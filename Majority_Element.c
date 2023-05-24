#include <stdio.h>
int main()
{
    int n,a[10],i,t,j,list[5]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        list[a[i]]++;
        
    }
    int k=list[0];
    for(i=0;i<5;i++)
    {
        if(list[i]>n/2)
        {
            k=i;
        }
        
    }
    printf("%d",k);
    
}