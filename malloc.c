#include<stdio.h>
#include<stdlib.h> //malloc
int main()
{
	int n=5,i;
	int arr[] = { 10,20,30,40,50}; //1000
	//array name itself acts as a pointer
	//pointer to first element in the array
	for ( i = 0; i < 5; i++)
	{
		printf("%d ", *(arr + i)); //1000 + 4
	}
}

