#include<stdio.h>
int main(){
    int rem,rev=0,n,x;
    printf("enter the number : ");
    scanf("%d",&n);
    x=n;
    while(n!=0){
        rem=n%10;
        rev=rev+rem*rem*rem;
        n=n/10;
    }
    if(x==rev){
        printf("it is a armstrong num");
    }
    else{
        printf("it is not armstron num");
    }
}