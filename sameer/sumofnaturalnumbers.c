#include<stdio.h>
int main()
{
	float sum,n,count;
	printf("enter the number:\n");
	scanf("%f",&n);
	for(count=1; count<=n; count++)
    {
    	sum=(sum+count);
	}	
	printf("the sum of natural numbers are %f:\n",sum);
	return 0;
	
}
