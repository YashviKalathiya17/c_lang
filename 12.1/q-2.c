#include<stdio.h>
struct Employee
{
	int emp_id;
	char emp_name[50];
	int emp_age;
	char emp_role[50];
	char emp_city[50];
	int emp_experience;
	char emp_company_name[50];
};

int main()
{
	int empnum,i;
	printf("Enter number of employees : ");
	scanf("%d",&empnum);
	struct Employee info[empnum];
	for(i=0;i<empnum;i++)
	{	
		printf("-----------------------\n");
        printf("Enter details for student %d:\n", i+1);
       	printf("Employee ID: ");
        scanf("%d", &info[i].emp_id);
        printf("Name: ");
        scanf("%s", info[i].emp_name); 
        printf("Age: ");
        scanf("%d", &info[i].emp_age);
        printf("Role: ");
        scanf("%s", info[i].emp_role);
        printf("City: ");
        scanf("%s", info[i].emp_city);
        printf("Experience: ");
        scanf("%d", &info[i].emp_experience);
        printf("Company name: ");
        scanf("%s", info[i].emp_company_name);
        printf("-----------------------\n"); 
	}
	for(i=0;i<empnum;i++)
	{
		printf("-----------------------\n");
	    printf("Student ==> %d\n", i + 1);
	    printf("-----------------------\n");
	    printf("Employee ID: %d",info[i].emp_id);
        printf("Name: %s\n",info[i].emp_name); 
        printf("Age: %d\n",info[i].emp_age);
        printf("Role: %s\n",info[i].emp_role);
        printf("City: %s\n",info[i].emp_city);
        printf("Experience: %d year\n",info[i].emp_experience);
        printf("Company name: %s\n",info[i].emp_company_name);
        printf("-----------------------\n"); 
	}
	return 0;
}