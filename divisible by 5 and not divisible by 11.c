#include<stdio.h>
int main()
{
	int divisible,n,non_divisible;
	printf("Enter a number:\n");
	scanf("%d",&n);
	if(n/5)
	{
		printf("The %n is divisible by 5:\n",divisible);
	}
	else if(n%11==!0)
	{
		printf("The %n is not divisible by 11:\n",non_divisible);
	}
}
