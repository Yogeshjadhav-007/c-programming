#include<stdio.h>
#include<string.h>
int main(){
	//length calculation
	char a[10]="yogesh";
	printf("length is :%d \n",strlen(a));
	
	// copy one string into another string
	char x[10]="yogesh";
	char y[10];
	strcpy(y,x);
	printf("copied string= %s \n",y);
	
	//conacatination
	char a1[10]= "yogesh";
	char b[10]= "eknath";
	char c[10]= "vaibhav";
	strcat(a1,b);
	printf(" %s",a1);
	strcat(b,c);
	printf(" %s \n",c);
	
	//compare two strings
	char str1[10]="hi";
	char str2[10]="yogesh";
	if(strcmp(str1,str2)==0){
		printf("it is equal \n");
	}else{
		printf("not equal \n");
	}
	
	return 0;
}
