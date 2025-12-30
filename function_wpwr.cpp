//function without parameter but with return value
#include<stdio.h>
#define PI 3.14
int getNumber(){
	return 10;
} 
float areaOfCircle(){
	float radius=7;
	return PI * radius*radius;
}

int main(){
	int x = getNumber();
	printf("number=%d",x);
	printf("area of circle = %.2f \n",areaOfCircle());
	return 0;
}
