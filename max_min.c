#include<stdio.h>
int main(){
	//finding the maximum array
//	int arr[5]= {23,4,2,20,21};
//	int max = arr[0];
//	int i;
//	for(i=1;i<5;i++){
//		if(arr[i]>max){
//			max = arr[i];
//		}
//	}
//	printf("maximum number = %d",max);

	int arr[5]= {23,4,2,20,21};
	int min = arr[0];
	int i;
	for(i=1;i<5;i++){
		if(arr[i]<min){
			min = arr[i];
		}
	}
	printf("minimum number = %d",min);
	return 0;
}
