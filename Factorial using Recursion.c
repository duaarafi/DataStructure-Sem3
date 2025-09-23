//Factorial using Recursion
#include<stdio.h>
int factorial(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else if(n>0)
	{
		return n*factorial(n-1);
	}
	else
	{
		printf("Invalid Input.");
	}
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int fact=factorial(n);
	printf("The factorial of %d is: %d",n,fact);
	return 0;
}
