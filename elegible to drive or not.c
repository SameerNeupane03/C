#include<stdio.h>
int main()
{
	int age,remaining_years;
	printf("Enter the age of a person \n");
	scanf("%d",&age);
	if(age>=16)
	{
		printf("The person is eligible to drive with the age of %d\n",age);
	}
	else
	{
	remaining_years=16-age;	
		printf("The person is not eligible for remaining %d years\n",remaining_years);
	}
}
