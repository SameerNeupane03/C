#include<stdio.h>
void main()
{
    int i,n[5];
    printf("Enter the salary: \n");
    for(i=0;i<5;i++)
    scanf("%d",&n[i]);
    for(i=0;i<5;i++)
    if(n[i]>5000&&n[i]<10000)
    
    printf("\n\tThe employee %d is in between given condition",n[i]);
else
    printf("\n\tThe employee %d is not in between the given condition",n[i]);
}
