//Palindrome
#include<stdio.h>
void is_palindrome(char str[100])
{
	char *p;
	char *q;
	int flag=1;
	p=&str[0];
	q=&str[0];
	while(*q!='\0')
	{
		q++;
	}
	q--;
	while(p<=q)
	{
		if(*p!=*q)
		{
			flag=0;
			break;
		}
		p++;
		q--;
	}
	if(flag==1)
	{
	    printf("Palindrome");
    }
    else
    {
    	printf("Not Palindrome");
	}

		return 0;
	
}

int main()
{
	char str[100];
	printf("Enter a string: ");
	scanf("%s",&str);
	
	is_palindrome(str);
	return 0;
}
