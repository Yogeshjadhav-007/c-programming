#include<stdio.h>

struct employee{
	int id_no;
	int name[20];
	char designation;
	int salary;
};
int main(){
	struct employee emp;
	printf("enter employee id");
	scanf("%d",&emp.id_no);
	printf("enter name");
	scanf("%s",emp.name);
	printf("enter designation");
	scanf("%s",&emp.designation);
	printf("enter salary");
	scanf("%d",&emp.salary);
	
	printf("details of employee \n");
	printf("employee id = %d \n",emp.id_no);
	printf("employee name = %s \n",emp.name);
	printf("employee designation = %s \n",emp.designation);
	printf("employee salary = %d \n",emp.salary);
	
	
	return 0;
}
