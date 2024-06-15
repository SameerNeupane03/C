#include<conio.h>

int main()
 {
	int n, i;
	printf("Enter no of employees: ");
	scanf("%d", &n);
	
	int salary[n];
	for(i=0; i<n;i++) {
		printf("Enter salary of employee %d: ", i+1);
		scanf("%d", &salary[i]);
	}
	
	printf("Salary of employees between 8000 and 12000 ");
	for(i=0;i<n;i++)
	 {
		if(salary[i] >= 8000 && salary[i] <= 12000) 
			printf("%d", salary[i]);
	}
	return 0;
}
