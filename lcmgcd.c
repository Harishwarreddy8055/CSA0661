#include<stdio.h>
int main(){
    int lcm,gcd,num,rem,den;
    printf("enter two nums : ");
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    num=(n1>n2)?n1:n2;
    den=(n1<n2)?n1:n2;
    rem=num%den;
    while(rem!=0){
        num=den;
        den=rem;
        rem=num%den;
    }
    gcd=den;
    lcm=(n1*n2)/gcd;
    printf("%d\n",gcd);
    printf("%d",lcm);
}