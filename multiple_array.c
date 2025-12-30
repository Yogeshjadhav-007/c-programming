#include<stdio.h>
int main(){
//	int arr[2][3] = {{1,2,3},{4,5,6}};
//	int i,j;
//	for(i=0;i<2;i++){
//		for(j=0;j<3;j++){
//			printf(" %d",arr[i][j]);
//		}
//		printf("\n");
//	}

//	int arr[2][2];
//	int i,j;
//	printf("enter 4 numbers \n");
//	for(i=0;i<2;i++){
//		for(j=0;j<2;j++){
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	printf("your entered elements");
//	for(i=0;i<2;i++){
//		for(j=0;j<2;j++){
//			printf("%d",arr[i][j]);
//		}
//		printf("\n");
//	}

// diagnoal of three elements
//	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//	int i;
//	printf("primary diagonal \n");
//	for(i=0;i<3;i++){
//		printf("%d ",arr[i][i]);
//	}

int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i;
	printf("primary diagonal \n");
	for(i=0;i<3;i++){
		printf("%d ",arr[i][2-i]);
	}
	
	return 0;
	
}
