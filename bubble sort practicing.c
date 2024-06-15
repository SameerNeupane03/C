#include<stdio.h>
int main()
{
	int pass,temp,n,j;
	int a[20];
	printf("Enter a number for sorting: \n");
	scanf("%d",&n);
	printf("Enter elements: \n");
	for(pass=0;pass<n;pass++)
	scanf("%d",&a[pass]);
	for(pass=0;pass<n-1;pass++)
	{
		for(j=0;j<n-pass-1;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
			
		}
	}
	for(pass=0;pass<n;pass++)
	printf("%5d",a[pass]);
}
