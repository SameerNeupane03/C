#include<stdio.h>
int main()
{
	int age,count,Class;
	printf("Enter your age:\n");
	scanf("%d",&age);
	if(age=3)
	{
		printf("In the age %d you read in class Nursery",age);
	}
	else if(age++)
    {
	printf("In the age %d you read in class LKG:\n",age);
    }
    else if(age=5)
    {
	printf("In the age %d you read in class UKG:\n",age);
    
	}
	return 0;
	}
