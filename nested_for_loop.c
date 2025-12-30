#include<stdio.h>
int main(){
	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}

	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
//	o/p-- 
//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5

//	for(i=1;i<=3;i++){
//		for(j=1;j<=3;j++){
//			printf("%d",i*j);
//		}
//		printf("\n");
//	}
	
//	for(i=5;i>=1;i--){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}

//	for(i=1;i<=num;i++){
//		for(j=1;j<=num;j++){
//			printf("%d",j);
//			num++;
//		}
//		printf("\n");
//	}
	return 0;
}
