#include<stdio.h>
int main()
{
    int a[5];
    int n,i,j,temp;
    printf("Enter a number for to sort the array : \n");
    scanf("%d",&n);
    printf("Enter the elements : \t");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<(n-i)-1;j++)
        {
          if(a[j]>a[j+1])
        {  
            temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
        }
    }
        for(i=0;i<n;i++)
        printf("%5d",a[i]);
    
}
