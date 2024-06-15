#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char n[80];
	fp=fopen("Sameer1.txt","a");
	if(fp==NULL)
	{
		printf("Error: File Not Found");
		exit(1);
	}
	printf("Enter a string to append in the file: \n");
	gets(n);
	fprintf(fp,"\n%s",n);
	printf("File successfully appended");
	fclose(fp);
}
