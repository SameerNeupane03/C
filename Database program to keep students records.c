#include<stdio.h>
int main()
{
	char name[10][20];
	int Roll_No[10];
	float percentage[10],Economics[10],Computer_Science[10],English[10],Account[10],Social[10],Nepali[10];
	int n,i;
	printf("How much data of students you have to save?\n");
	scanf("%d",&n);
     for(i=0;i<n;i++)
     {
     	printf("Enter the name of the student: \n");
     	scanf("%s",&name[i]);
     	printf("Enter the Roll number: \n");
     	scanf("%d",&Roll_No[i]);
     	printf("Enter the marks obtained by %s in Economics: ",name[i]);
     	scanf("%f",&Economics[i]);
        printf("Enter the marks obtained by %s in Computer Science: ",name[i]);
        scanf("%f",&Computer_Science[i]);
        printf("Enter the marks obtained by %s in English: ",name[i]);
        scanf("%f",&English[i]);
        printf("Enter the marks obtained by %s in Account: ",name[i]);
        scanf("%f",&Account[i]);
        printf("Enter the marks obtained by %s in Social: ",name[i]);
        scanf("%f",&Social[i]);
        printf("Enter the marks obtained by %s in Nepali: ",name[i]);
        scanf("%f",&Nepali[i]);
     	percentage[i]=(Economics[i] + Computer_Science[i] + English[i] + Account[i] + Social[i] + Nepali[i])*100/450;
	 }
	 for(i=0;i<n;i++)
	 printf("Congratulation,%s you've got %.2f percentage\n",name[i],percentage[i]);
}
