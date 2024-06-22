#include<stdio.h>
int main(){
    int n,i,prime=0;
    printf("enter the num : ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("it is composite");
            prime=1;
            break;
        }  
    }
    if(prime==0){
        printf("not a composite");
    }
}