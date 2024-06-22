#include<stdio.h>
int main(){
    int rem,rev=0,n,x;
    printf("enter the value of n : ");
    scanf("%d",&n);
    x=n;
    while(n!=0){
        rem=n%10;
        rev=rev+rem*rem*rem;
        n=n/10;
    }
    if(x==rev){
        printf("it is a armstrong number");
    }
    else{
        printf("it is not a armstrong number");
    }
}