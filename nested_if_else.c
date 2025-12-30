#include<stdio.h>
int main(){
	int ticket, idproof,luggage;
	printf("do you have a ticket(1-yes,0-no)");
	scanf("%d",&ticket);
	if(ticket==1){
		printf("do you have a id proof(1-yes,0-no)");
		scanf("%d",&idproof);
		
		if(idproof==1){
			printf("is luggage within 15kg(1-yes,0-no)");
			scanf("%d",&luggage);
		
			if(luggage==1){
				printf("check in successfully");
			}
			else{
				printf("extra luggage apply");
			}
		}
			else{
				printf("id proof required");
			}
	}else{
				printf("no ticket, no entry");
			}
	return 0;
}
