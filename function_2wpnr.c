#include<stdio.h>
//function with parameter but no return
int  i;
void printTable(int num){
	for(i=1;i<=10;i++){
		printf("%d x %d=%d \n",num,i,num*i);
	}
}

int main(){
	int num;
	printf("enter a number \n");
	scanf("%d",&num);
	
	printf("\n multiplication table of %d : \n");
	printTable(num);
	return 0;
}
