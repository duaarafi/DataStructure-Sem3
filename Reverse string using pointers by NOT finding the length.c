//Reverse string using pointers by NOT finding the length
#include<stdio.h>
int main()
{
	char str[100];
	char *p;
	char *q;
	printf("Enter a string: ");
	scanf("%s",&str);
	
	p=&str;
	q=&str;
	
	while(*q!='\0')
	{
		q++;
	}
	q--;
	
	printf("Reversed string: ");
	while(q>=p)
	{
		printf("%c",*q);
		q--;
	}
	return 0;
}
