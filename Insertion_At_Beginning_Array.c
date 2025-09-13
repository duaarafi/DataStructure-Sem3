//Insertion of element at the beginning of an array.
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
	
	printf("Enter the element you want to insert in the beginning of the array: ");
	scanf("%d",&x);
	
	printf("Updated Array = ");
	printf("[");
	for(i=n-1;i>=0;i--)
	{
		array[i+1]=array[i];
	}
	
	array[0]=x;
	
	for(i=0;i<=n;i++)
	{
		printf("%d ",array[i]);
	}
	printf("]");
	return 0;
}
