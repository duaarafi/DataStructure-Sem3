//Display string in reverse order.
#include<stdio.h>
int main()
{
	char str[100];
	int i;
	int length=0;
	printf("Enter a string: ");
    scanf("%s",&str);
    
    printf("Reversed String: ");
    for(i=0;str[i]!='\0';i++)
    {
    	length++;
	}
	for(i=length-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;
}
