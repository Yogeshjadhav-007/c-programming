#include<stdio.h>
int main(){
//	int choice;
//	
//	do{
//		printf("\n 1.hello \n 2.bye \n 3.exit \n -- enter your choice");
//		scanf("%d",&choice);
//		if(choice==1){
//			printf("hello \n");
//		}else if(choice==2){
//			printf("bye \n");
//		}
//	}while(choice!=3);

	int n=345434,digit=0,sum=0;
	do{
		digit=n%10;
		sum=sum+digit;
		n=n/10;
	}while(n>0);
	printf("total sum=%d",sum);
	
	return 0;
}
