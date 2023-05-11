#include<stdio.h>
void bubble_sort(int *arr,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
    	for( j=0;j<n-1;j++)
	    {
	    	if(arr[j]>arr[j+1])
		    {
			   int t=arr[j];
			   arr[j]=arr[j+1];
			   arr[j+1]=t;
		    }
	    }
    }
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
