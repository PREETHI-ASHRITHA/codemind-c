#include<stdio.h>
int main()
{
	int n,sum=0,pro=1,r;
	printf("Enter the number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum+=r;
		pro*=r;
		n=n/10;
	}
	printf("Sum of the digits = %d\n",sum);
	printf("Product of digits = %d\n",pro);
}
