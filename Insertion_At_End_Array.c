//Insertion of element at the end of an array.
#include<stdio.h>
int main()
{
	int array[100];
	int n,i,x;
	
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
	printf("] \n");
	
	printf("Enter the element you want to insert in the end of the array: ");
	scanf("%d",&x);
	
	array[n]=x;
	
	printf("Updated Array = ");
	printf("[");
	
	for(i=0;i<=n;i++)
	{
		printf("%d ",array[i]);
	}
	printf("]");
	return 0;
}
