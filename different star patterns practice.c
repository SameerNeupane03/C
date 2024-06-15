#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,space,rows;
	printf("Enter the number of rows you want to print * in some patterns:  ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	
		for(space=1;space<=rows-i;space++)
		{
			printf(" ");
		}
			for(j=1;j<=10;j++)
	{
			printf("*");
	}
	printf("\n");
	}
}}
