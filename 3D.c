#include<stdio.h>
int main()
{
	printf("FIRST MATRIX A:\n");
	int a[3][3],b[3][3],multiple[3][3],i,j,k,sum=0;
	for(i=0;i<3;i++)
     	{
		for(j=0;j<3;j++)
	{
		printf("Enter the elements of matrix a[%d][%d]:\n",i,j);
		scanf("%d",&a[i][j]);
	}
}
printf("SECOND MATRIX:\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("Enter the elements of matrix b[%d][%d]:\n",i,j);
		scanf("%d",&b[i][j]);
	}
}
printf("The multiple of 2 matrixes A and B:\n");
for( i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	
	for(k=0;k<3;k++)
	{
		sum=sum+a[i][k]*b[k][j];
	}
	multiple[i][j]=sum;
	
}
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%5d",multiple[i][j]);
	}
	printf("\n");
}	
}
