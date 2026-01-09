#include<stdio.h>
void myadd(){
	int a,b,multi;
	printf("Enter a first number:");
	scanf("%d",&a);
	printf("Enter a second number");
	scanf("%d",&b);
	multi=a*b;
	printf("the multiplication of two no is:%d",multi);
}
int main(){
	myadd();
	return 0;
}
