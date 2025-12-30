#include<stdio.h>
int main(){
	int marks[5] = {20,23,22,37,31};
	int i;
	printf("array elements \n");
	for(i=0;i<5;i++){
		printf("\n %d",marks[i]);
	}
	marks[2] = 100;
	printf("array elements \n");
	for(i=0;i<5;i++){
		printf("\n %d",marks[i]);
	}
	return 0;
}
