#include<stdio.h>
int main()
{
    int n,num,sqr;
    int temp,rem,f=0;
    scanf("%ld",&n);
    num=n;
    sqr=n*n;
    temp=10;
    while(n!=0)
    {
        rem=sqr%temp;
        if(num==rem)
        {
            f=1;
            break;
        }
        n=n/10;
        temp=temp*10;
    }
    if(f==1)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}