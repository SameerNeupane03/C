#include<stdio.h>
int sorting(int [] ,int );
int main()
{
    int n,i;
    int a[20];
    printf("Enter a number for sorting: \n");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sorting(a,n);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
int sorting(int a[],int n)/*passing the elements and numbers*/
{
	int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
