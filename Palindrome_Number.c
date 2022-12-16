#include<stdio.h>
int main()
{
    int i,n,a=0,r,sum=0,temp,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        temp=n;
        sum=0;
        while(n>0)
        {
            r=n%10;
            sum=(sum*10)+r;
            n=n/10;
        }
        if(temp==sum)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
        printf("
");
    }
}