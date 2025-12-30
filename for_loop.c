#include<stdio.h>
int main(){
	int i,j;
	//print numbers 1 to 10
	for(i=1;i<=10;i++){
		printf("%d \n",i);
	}
	//multiplication of 5
	
	for(i=1;i<=10;i++){
		printf("5 * %d = %d \n",i,5*i);
	}
	// 10 t0 1
	for(i=10;i>=0;i--){
		printf("%d \n",i);
	}
	// skipping numbers 0 t0 20
	for(i=0;i<=20;i+=2){
		printf("%d \n",i);
	}
	//multiple conditions
	for(i=1,j=5;i<=5;i++,j--){
		printf("i=%d,j=%d \n",i,j);
	
	}
	int sum;
	//sum of numbers
	for(i=1;i<=5;i++){
		sum=sum+i;
	}
	printf("sum=%d",sum);
	return 0;
}
