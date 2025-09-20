//Length of the string.
#include<stdio.h>
int main()
{
	char str[100];
	int length = 0;
	int i;
	printf("Enter a string: ");
    scanf("%s",&str);
    
    printf("The length of this string is: ");
    for(i=0;str[i]!='\0';i++)
    {
    	length++;
	}
	printf("%d",length);
	return 0;
    
}
