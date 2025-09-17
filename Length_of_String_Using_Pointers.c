//Length of string using pointer
#include<stdio.h>
int main()
{
	char string[100];
	int length=0;
	
	printf("Enter a string: ");
	scanf("%s",&string);
	
	printf("Length of String: ");
	char *p;
	p=&string;
	while(*p!='\0')
	{
		length++;
		p++;
	}
	printf("%d",length);
	return 0;
}
