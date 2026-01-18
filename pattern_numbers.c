#include<stdio.h>
int main(){
    int r=3;
    int c=5;
    for(int i=0;i<r;i++){
        for(int i j=0;j<c;j++){
            printf((i+j)+"");
        }
        printf("\n");
    }
    return 0;
}