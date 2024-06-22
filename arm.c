#include<stdio.h>
int main(){
    int rem,rev=0,n,i,x;
    printf("enter the value of n : ");
    scanf("%d",&n);
    x=n;
    while(n!=0){
        rem=n%10;
        rev=rev+rem*rem*rem;
        n=n/10;
    }
    if(x==rev){
        printf("it is armstrong num");
    }
    else{
        printf("it is not armstrong num");
    }
}