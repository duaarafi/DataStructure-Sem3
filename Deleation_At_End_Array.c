//Deleation of element at the end of an array.
#include<stdio.h>
int main()
{
	int array[100];
	int n,i;
	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	printf("Enter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &array[i]);
	}
	
	printf("Array Entered = ");
	printf("[ ");
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	printf("]\n");
	
	printf("Deleating the last element of the array...\n");
	n=n-1;
	printf("Updated Array:");
	printf("[");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	printf("]");
	return 0;
}
