//To display string.
#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("Enter the string: ");
	scanf("%s",&str);
	
	
	//To display string:
	printf("Displayed String: ");
	for(i=0; str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}
	
	return 0;
}
