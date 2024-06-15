#include<stdio.h>
#include<conio.h>
int main()
{
	int number;
	printf("Enter a number\n");
	scanf("%d",&number);
	if(number%5==0 && number%11!=0)
{
		printf("The number %d is divisible by 5 and not by 11\n ",number);
	}
		getch();

}
