#include<stdio.h>
int main()
{
    int n,m,r=0;
    scanf("%d",&n);
    while(n)
    {
        m=n%10;
        r=r+m*m;
        n=n/10;
        if(n==0 && r>9)
        {
          n=r;
          r=0;
        }
    }
    if(r!=1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    
}