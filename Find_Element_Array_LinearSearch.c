//To find element in an integer array using linear search.

#include<stdio.h>
int main()
{
	int arr[100],n,i,z,location;
	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	printf("Enter thr elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Array Displayed: ");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("]\n");
	
	printf("Enter the element to be searched from this array: ");
	scanf("%d",&z);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==z)
		{
			location=i;
			break;
		}
    }  
    
    if(location=i)
    {
    		printf("The element is located at index: %d",location);
	}
	else
	{
			printf("Element not found!");
	}
    
	return 0;	
} 
