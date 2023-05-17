#include<stdio.h>
int arr[5];
void read() {
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
}
int main()
{
	read();
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
