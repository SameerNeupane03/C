#include<stdio.h>
int main()
{
	float n;
	printf("the number is:\n");
	scanf("%f",&n);
	if(n>0)
	printf("the number is positive %f:\n");
	else if(n<0)
	printf("the number is negative %f:\n");
	else
	printf("the number is constant");
	return 0;
}
