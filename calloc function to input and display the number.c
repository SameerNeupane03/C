#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,*p;
    printf("How much number to print?: \n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
    printf("Enter number of %d element: \n",i+1);
    scanf("%d",(p+i));
    }
    for(i=0;i<n;i++)
    printf("\t\nThe numbers %d is: %d",i+1,*(p+i));
    free(p);
}
