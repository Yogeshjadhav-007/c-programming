#include<stdio.h>
//function with parameter with return

int square(int num){
	return num * num;
}
int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int main(){
//	int result = square(4);
//	printf("square=%d \n",result);
int result = max (43,21);
printf("maximum number: %d \n",result);
	return 0;
}
