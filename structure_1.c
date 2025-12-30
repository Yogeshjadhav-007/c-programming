#include<stdio.h>
//structure is a user defined datatype -it allows us store multiple vsraibles
// of different datatype under one name.
// syntax
//struct structure_name{
//	data_type member1;
//	data_type member2;
//	data_type member3;
//}
struct student{
	int roll;
	float marks;
	char grade;	
};
int main(){
	struct student s1;
	struct student s2;
	struct student s3;
	s1.roll = 101;
	s1.marks = 78.23;
	s1.grade ='A';
	printf("-----student 1 details----- \n");
	printf("roll no = %d \n",s1.roll);
	printf("marks = %.2f \n",s1.marks);
	printf("grade = %c \n",s1.grade);
	
	s2.roll = 102;
	s2.marks = 72.13;
	s2.grade ='B';
	printf("-----student 2 details----- \n");
	printf("roll no = %d \n",s2.roll);
	printf("marks = %.2f \n",s2.marks);
	printf("grade = %c \n",s2.grade);
	
	s3.roll = 103;
	s3.marks = 52.13;
	s3.grade ='C';
	printf("-----student 3 details----- \n");
	printf("roll no = %d \n",s3.roll);
	printf("marks = %.2f \n",s3.marks);
	printf("grade = %c \n",s3.grade);
	return 0;
}
