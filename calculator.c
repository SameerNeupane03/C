#include<stdio.h>
int main()
{
	float a,b,sum,diff,multiple,division;
	printf("enter number a:\n");
	scanf("%f",&a);
	printf("enter the number b:\n");
	scanf("%f",&b);
	sum=a+b;
	diff=a-b;
	multiple=a*b;
	division=a/b;
	printf("the sum is %f:\n",sum);
	printf("the diff is %f:\n",diff);
	printf("the multiple is %f:\n",multiple);
	printf("the division is %f:\n",division);
	return 0;

}
