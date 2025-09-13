//Deleation of an element at any position in an array.
#include<stdio.h>
int main()
{
	int array[100];
	int n,i,w;
	
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
	
	printf("Enter the index you want to deleate in this array: ");
	scanf("%d",&w);
	
	printf("Updated Array: ");
	printf("[");
	
	for(i=w;i<n-1;i++)
	{
		array[i]=array[i+1];
	}
	
	n=n-1;
	
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	
	printf("]");
	
	return 0;	
}
