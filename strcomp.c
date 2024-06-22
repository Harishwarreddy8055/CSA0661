#include<stdio.h>
#include<string.h>
int main(){
    char str1[10],str2[10];
    int result;
    printf("enter strings : ");
    gets(str1);
    gets(str2);
    result=strcmp(str1,str2);
    if(result==0){
        printf("both are same");
    }
    else{
        printf("not same");
    }
}