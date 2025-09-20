//To copy string.
#include<stdio.h>
int main()
{
	char str1[100];
	char str2[100];
	int i;
	
	printf("Enter a string: ");
    scanf("%s",&str1);
    for(i=0;str1[i]!='\0';i++)
    {
    	str2[i]=str1[i];
	}
	
	printf("Original String: %s\n",str1);
	printf("Copied String: %s",str2);
	
	return 0;
}

