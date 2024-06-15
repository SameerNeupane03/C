#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char n[80];
	fp=fopen("appendfile.txt","a");
	if(fp==NULL)
	{
		printf("Error: File Not Found");
		exit(1);
	}
	printf("Enter a string: \n");
	gets(n);
	fprintf(fp,"\n%2s",n);
	fclose(fp);
}
