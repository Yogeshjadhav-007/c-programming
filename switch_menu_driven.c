#include<stdio.h>
int main(){
	int a, b, choice;
	char cont;
	
	do{
		printf("=======calculator menu====== \n");
		printf("1. addition(+) \n");
		printf("2. substraction(-) \n");
		printf("3. multiplication(*) \n");
		printf("4. division(/) \n");
		printf("0. exit \n");
		
		printf("enter your choice \n");
		scanf("%d",&choice);
		
		if(choice!=0 && choice<=4){
			printf("enter first number \n");
			scanf("%d",&a);
			printf("enter second number \n");
			scanf("%d",&b);
		}
		switch(choice){
			case 1: printf("sum=%d \n",a+b);
			break;
			case 2: printf("sub=%d \n",a-b);
			break;
			case 3: printf("multiplication=%d \n",a*b);
			break;
			case 4: printf("division=%d \n",a/b);
			break;
			case 0: printf("calculator existing....bye bye \n");
			break;
			default : printf("invalid choice \n");
		}
		if(choice!=0){
			printf("do you want to perform another opertaion(y/n) \n");
			scanf(" %c",&cont);
		}else{
			cont='n';
		}
	}while(cont=='y'|| cont=='Y');
	
	return 0;
}
