#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	add();
	getch();
}
add()
{
	int a,b,c;
	printf("Enter two number for sum\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("%d",c);
	
}
