#include<stdio.h>
int main()
{
    float l,b,perimeter;
	printf("the length is\n");
	scanf("%f",&l);
	printf("the breadth is\n");
	scanf("%f",&b);
	 perimeter=2 * (l+b);
	printf("perimeter is %f",perimeter);
	return 0;
}
