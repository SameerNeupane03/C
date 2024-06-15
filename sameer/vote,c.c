#include<stdio.h>
int main()
{
	int age;
	printf("the age is:\n");
	scanf("%d",&age);
	if(age >= 18)
	printf("can vote %d:\n");
	else if(age < 18)
	printf("cannot vote %d:\n");
	return 0;
}
