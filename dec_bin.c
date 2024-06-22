#include<stdio.h>
int main(){
    int n,rem,bin=0;
    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("the binary value is : ");
    int rev=0,x;
    while(n!=0){
        rem=n%2;
        bin=rem;
        n=n/2;
        if(bin!=0){
            x=bin%10;
            rev=rev*10+x;
            bin=bin/10;
            printf("%d",rev);
        }
    }
    
}