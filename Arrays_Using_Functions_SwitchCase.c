#include<stdio.h>

void Display(int array[], int n)
{
	int i;
	printf("Entered Array =");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	printf("]\n");
}

void InsertDisplay(int array[], int n)
{
	int i;
	printf("Entered Array =");
	printf("[");
	for(i=0;i<=n;i++)
	{
		printf("%d ",array[i]);
	}
	printf("]\n");
}

void InsertionEnd(int array[], int n, int x)
{
	int i;
	array[n]=x;
	InsertDisplay(array, n);
}

void InsertionBeginning(int array[], int n, int y)
{
	int i;
	for(i=n-1;i>=0;i--)
	{
		array[i+1]=array[i];
	}
	array[0]=y;
	InsertDisplay(array, n);
}

void InsertionAnywhere(int array[], int n, int w, int z)
{
	int i;
	for(i=n-1;i>=w;i--)
	{
		array[i+1]=array[i];
	}
	array[w]=z;
	InsertDisplay(array, n);
}


void DeleateEnd(int array[], int n)
{
	n=n-1;
	Display(array, n);
}

void DeleateBeginning(int array[], int n)
{
	int i;
	printf("Entered Array =");
	printf("[");
	for(i=1;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	printf("]\n");
}

void DeleateAnywhere(int array[], int k, int n)
{
	int i;
	for(i=k;i<n;i++)
	{
		array[i]=array[i+1];
	}
	n=n-1;
	Display(array, n);
}
int main()
{
	int array[100];
	int n,i,x,y,w,z,option,k;
	
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	
	printf("Enter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("Please select one of the numbers from below to perform the following operation: \n");
	printf("1. To display the array. \n");
	printf("2. To insert an element at the end of this array. \n");
	printf("3. To insert an element at the beginning of this array. \n");
	printf("4. To insert an element at the given index of this array. \n");
	printf("5. To deleate an element at the end of this array. \n");
	printf("6. To deleate an element at the beginning of this array. \n");
	printf("7. To deleate an element at the given index of this array. \n");
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:
			{
		    Display(array, n);
		    break;
		    }
		case 2:
		    {
		    printf("Enter the element to be inserted at the end of the array: ");
	        scanf("%d",&x);
	        InsertionEnd(array, n, x);	
	        break;
			}	
		case 3:
		    {
			printf("Enter the element to be inserted at the beginning of the array: ");
	        scanf("%d",&y);
        	InsertionBeginning(array, n, y);
        	break;
			}
		case 4:
	    	{
			printf("Enter the index of the element to be inserted: ");
	        scanf("%d",&w);
        	printf("Enter the element to be inserted: ");
        	scanf("%d",&z);
        	InsertionAnywhere(array, n, w, z);	
        	break;
			}
		case 5:
		    {
		    DeleateEnd(array, n);		
		    break;
			}			
		case 6:
		    {
		    DeleateBeginning(array, n);
		    break;
			}
		case 7:
	    	{
			printf("Enter the index of the element to be deleated: ");
	        scanf("%d",&k);
            DeleateAnywhere(array, k, n);	
        	break;
			}		
	}
	return 0;
}
