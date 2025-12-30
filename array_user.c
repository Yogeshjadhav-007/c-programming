#include<stdio.h>
int main(){
//	int marks [5];
//	int i;
//	printf("enter 5 students marks \n");
//	for(i=0;i<5;i++){
//		scanf("%d",&marks[i]);
//	}
//	printf("students marks:");
//	for(i=0;i<5;i++){
//		printf("marks[%d]=%d \n",i,marks[i]);
//	}

//sum of array
//	int arr[5] = {4,13,23,43,22};
//	int sum = 0;
//	int i;
//	int length = sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<length;i++){
//		sum+= arr[i];
//	}
//	printf("sum = %d",sum);
// reverse of array
//	int arr[5] = {4,13,23,43,22};
//	int i;
//	printf("array in reverse order \n");
//	for(i=4;i>=0;i--){
//		printf(" %d \n",arr[i]);
//	}

//	int arr1[5] = {4,13,23,43,22};
//	int arr2[5];
//	int i;
//	for(i=0;i<5;i++){
//		arr2[i] =arr1[i];
//		
//	}
//		printf("copied array :");
//		for(i=0;i<5;i++){
//		printf("%d",arr2[i]);
//		}
	
	int arr[8] = {1,2,3,4,5,6,7,8,9};
	int even = 0, odd=0;
	int i;
	for(i=0;i<8;i++){
		if(arr[i] %2 == 0){
			even++;
		}else{
			odd++;
		}
	printf("even count = %d,odd count = %d",even,odd);
	return 0;
}
