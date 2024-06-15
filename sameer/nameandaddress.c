#include<stdio.h>
void main()
{
	char name[25];
	printf("The name is\n");
	scanf("%c",&name);
	int address[10];
	printf("The address is\n");
	scanf("%d",&address);
	printf("%c\n",name);
	printf("%d\n",&address);
	getch();
}
