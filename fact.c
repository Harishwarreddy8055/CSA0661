#include<stdio.h>
int main(){
    int n,per=0,i,x;
    printf("enter the value : ");
    scanf("%d",&n);
    x=n;
    for(i=1;i<n;i++){
        if(n%i==0){
            per=per+i;
        }
    }
    if(x==per){
        printf("perfect");
    }
    else{
        printf("not perfect");
    }
}