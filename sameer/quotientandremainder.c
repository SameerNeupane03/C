#include<stdio.h>
int main()
{
	int quotient,remainder,n1,n2;
	printf("enter the number first which is dividend:\n");
	scanf("%d",&n1);
	printf("enter the second number which is divisor:\n");
	scanf("%d",&n2);
	quotient=n1/n2;
	remainder=n1%n2;
	printf("the quotient is %d:\n",quotient);
	printf("the remainder is %d:\n",remainder);
	return 0;
}
