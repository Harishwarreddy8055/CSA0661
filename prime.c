#include<stdio.h>
int main(){
    int n,prime=0,i;
    printf("enter the n value :");
    scanf("%d",&n);
   for(i=2;i<n;i++){
			if(n%i==0){
				printf("it is a not prime num");
				prime=1;
				break;
			}
			}

			if(prime==0){
				printf("it is a prime num");
			}
}