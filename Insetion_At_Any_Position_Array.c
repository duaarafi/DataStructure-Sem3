//Insetion of an element at any position in an array.
#include<stdio.h>
int main()
{
	int array[100];
	int n,i,x,w;
	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	printf("Enter the elements of the array: ");
	
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("Entered Array: ");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	printf("]\n");
	
	printf("Enter the element you want to add in this array: ");
	scanf("%d",&x);
	
	printf("Enter the index you want to add this element in: ");
	scanf("%d",&w);
	
	printf("Updated Array: ");
	printf("[");
	
	for(i=n-1;i>=w;i--)
	{
		array[i+1]=array[i];
	}
	array[w]=x;
	
	for(i=0;i<n+1;i++)
	{
		printf("%d ",array[i]);
	}
	
	printf("]");
	
	return 0;	
}
