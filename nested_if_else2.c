#include<stdio.h>
int main(){
	int restoopen, foodavailable,payment;
	
	printf("is resturant is open(1-yes,0-no)");
	scanf("%d",&restoopen);
	
	if(restoopen==1){
		printf("food is avialable(1-yes,0-no)");
		scanf("%d",&foodavailable);
		if(foodavailable==1){
			printf("payment successful(1-yes,0-no)");
			scanf("%d",&payment);
			if(payment==1){
				printf("order confirmed");
			}else{
				printf("payment failed");
			}
		}else{
			printf("food not available");
		}
	}else{
		printf("retaurant is closed");
	}
	return 0;
}
