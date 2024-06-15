#include<stdio.h>
int main()
{
    int i,j,k,sum;
    int a[3][3],b[3][3],c[3][3];
    printf("Enter 9 numbers for the A matrix rows and columns : \n");
    for(i=0;i<3;i++)
       {
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
       }
    printf("Enter 9 numbers for the B matrix rows and columns: \n");
    for(i=0;i<3;i++)
      {
    for(j=0;j<3;j++)
    {
        scanf("%d",&b[i][j]);
    }
      }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
            sum=sum+a[i][k]*b[k][j];
            c[i][j]=sum;
            }
        }
    }
   {
       for(i=0;i<3;i++)
          {
              for(j=0;j<3;j++)
                   {
                       printf("%d\t",c[i][j]);
                    }
                    printf("\n");
          }
   }
}

