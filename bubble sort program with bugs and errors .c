#include<stdio.h>
int main()
{
    int i,j,size,t;
  int arr[10]={1,4,2,5,9};
    printf("Enter the size of an array to sort the given number: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",arr);
    }
    for(i=0;i<=size-1;i++)
    {
        for(j=0;j<=(size-i)-1;i++)
        if(arr[j]>arr[j+1])
        {
           t=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=t;
        }
    }
}
