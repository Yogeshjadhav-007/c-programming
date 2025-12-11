#include<stdio.h>
int main(){
	
//	int amount;
//	printf("enter the food order amount \n");
//	scanf("%d",&amount);
//	if(amount>500){
//		printf("free home delivery \n");
//	}else{
//		printf("no free home deleivery \n");
//	}
	int balance,withdraw;
	printf("enter your balance \n");
	scanf("%d",&balance);
	printf("enter your withdrawal \n");
	scanf("%d",&withdraw);
	
	if(withdraw<=balance){
		balance=balance-withdraw;
		printf("withdrawal successful \n",balance-withdraw);
		printf("remaining balance=%d \n",balance);
	}else{
		printf("insufficient balance");
	}
	return 0;
}
