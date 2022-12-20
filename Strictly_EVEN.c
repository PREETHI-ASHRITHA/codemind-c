#include<stdio.h>
int main()
{
    int n,j,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int res=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0&&i%2!=0)
        {
            res=1;
            break;
        }
    }
    if(res==1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}
