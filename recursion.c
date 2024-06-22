#include<stdio.h>
int fact(int);
int main(){
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("the factorial of %d",fact(n));
}
int fact(int n){
    if(n==0){
        return 1;
    }
    return fact(n-1)*n;
}