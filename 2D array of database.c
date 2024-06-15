#include<stdio.h>
int main()
{
    char name[5][30];
    int rollno[5];
    float percentage[5];
    int data,i;
    printf("How much data you have to save?\n");
    scanf("%d",&data);
    for(i=0;i<data;i++)
    {
        printf("Enter the name: \n");
        scanf("%s",&name[i]);
        printf("Enter Roll Number: \n");
        scanf("%d",&rollno[i]);
        printf("Enter the percentage gained by the students: \n");
        scanf("%f",&percentage[i]);
    }
    for(i=0;i<data;i++)
    printf("%s of %d got %f percentage\n",name[i],rollno[i],percentage[i]);
}
