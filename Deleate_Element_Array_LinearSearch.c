//To deleate a given element from the integer array.(Using Linear Search)

#include<stdio.h>
int main()
{
	int arr[100],n,i,z,index;
	
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
	
	printf("Enter thr element to be deleated from this array: ");
	scanf("%d",&z);
	
	//Linear Search Code: Checks each element of the array untill it finds the target.
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==z)
		{
			index=i;
			break;
		}
	}
	
	for(i=index;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	
	n=n-1;
	
	printf("Updated Array: ");
	printf("[");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("]\n");
	return 0;
}
