//array as an function argument
#include<stdio.h>
int modify(int*a)
{
	a[0]=147;
}
int main()
{
	int a[5]={10,20,30,40,50};
	printf("Before modification: %d ",a[0]);
	modify(a);
	printf("\nAfter modification: %d",a[0]);
}
