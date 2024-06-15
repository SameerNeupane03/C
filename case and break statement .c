#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,b,sum,choice;
	while(1)/*non zero number written in while is evaluate true which repeat's program again and again that's the work of while(1) here */
    {
	printf("1.Sum of numbers\n");
	printf("2.Finding the number positive or negative\n");
	printf("3.Printing the natural numbers upto N\n");
	printf("4.Exit\n");
	
	printf("Enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
	
	case 1:
		printf("Enter two numbers\n");
		scanf("%d%d",&a,&b);
		sum=a+b;
		printf("The sum of two numbers is %d\n",sum);
	break;
	
	case 2:
		printf("Enter a number for checking whether a number is even or odd");
		scanf("%d",&a);
		if(a%2==0)
		printf("Even number %d",a);
		else 
		printf("Odd number %d");
	break;
	
	case 3:
		printf("Enter a number for showing natural numbers upto the entered number\n");
		scanf("%d",&a);
		for(b=0;b<=a;b++)
		printf("Natural numbers upto you entered is %d\n",b);
	break;
	
	case 4:exit(0);
    default:
    	printf("You entered wrong number enter another number for next try");
    }
    	getch();
    }
    }


