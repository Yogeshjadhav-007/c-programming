#include<stdio.h>
int main(){
	int marks;
	printf("enter marks \n");
	scanf("%d",&marks);
	if(marks>35 && marks<=50){
		printf("c grade \n");
		 if(marks>51 && marks<=70){
			printf("b grade \n");
		}
		else if(marks>71 && marks<=100){
			printf("a grade \n");
		}else{
			printf("fail");
		}
	}
	return 0;
}
