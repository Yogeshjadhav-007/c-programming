#include<stdio.h>
int main(){
	int marks;
	printf("enter marks \n");
	scanf("%d",&marks);
	if(marks>35 && marks<=50){
		printf("grade c \n");
	}else if(marks>51 && marks<=70){
		printf("grade b \n");
	}else if(marks>71 && marks<=100){
		printf("grade a \n");
	}else{
		printf("fail");
	}
	return 0;
}
