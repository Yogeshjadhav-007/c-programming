// print number from 1 to 10
#include<stdio.h>
int main(){
    // int i;
    // for(i=1;i<=10;i++){
    //     printf("%d \n",i);
    // }
    // return 0;

	
    int arr[]={10,20,30,40,50};
    int n=5;
    int num=40;
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            found=1;
            break;
        }
    } 
    if(found==1){
        printf("element exixt");
    }   else{
        printf("elmemtn noot exist");
    }
    
}