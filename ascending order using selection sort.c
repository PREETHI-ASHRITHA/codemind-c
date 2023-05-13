#include<stdio.h>
void selection_sort(int *arr,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		int minn=arr[i],ind=i;
    	for(j=i+1;j<n;j++)
	    {
	    	if(minn > arr[j]){
	    		minn=arr[j];
	    		ind=j;
			}
	    }
	    int temp=arr[i];
	    arr[i]=arr[ind];
	    arr[ind]=temp;
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
	selection_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
