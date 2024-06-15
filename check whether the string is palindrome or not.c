#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	printf("Enter a string: \n");
	gets(a);
	strcpy(b,a);
    if(strcmp(b,strrev(a))==0)
	{
		printf("%s is palindrome",a);
	}
	else
	printf("%s is not palindrome");	
}
