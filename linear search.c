#include<stdio.h>
int main()
{
	int n,key,i,c=0;
	scanf("%d%d",&n,&key);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			c++;
			break;
		}
	}
	if(c!=0)
	{
		printf("found");
	}
	else
	{
		printf("not found");
	}
}
