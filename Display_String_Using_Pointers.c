//Display a string using pointer
#include<stdio.h>
int main()
{
	char string[100];
	
	printf("Enter a string: ");
	scanf("%s",&string);
	
	printf("Displayed String: ");
	
	char *p;
	
	p=&string;
	while(*p != '\0')
	{
		printf("%c",*p);
		p++;
	}
	
	
	return 0;
	
	
}
