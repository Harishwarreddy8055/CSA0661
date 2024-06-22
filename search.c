#include<stdio.h>
int main(){
    int arr[7]={16,18,27,16,23,21,19},n;
    printf("enter the number to search : ");
    scanf("%d",&n);
    for(int i=0;i<7;i++){
        if(n==arr[i]){
            printf("the number %d is found at the position of %d",n,i+1);
        }
    }
}