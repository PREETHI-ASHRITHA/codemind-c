#include<stdio.h>
int main()
{
	int a=0,b=1,n,c;
	scanf("%d",&n);
	c=a+b;
	while(c<n)
	{
	a=b;
	b=c;
	c=a+b;
	}
	printf("%d",c);
}
