#include<stdio.h>
int i;
void area(int length,int width){
	printf("area of rectangle is=%d",length*width);
}
int main(){
	int length,width;
	printf("enter a length");
	scanf("%d",&length);
	printf("enter a width");
	scanf("%d",&width);
	area(length,width);
	return 0;
}
