#include<stdio.h>
int main(){
    char arr[100];
    int count=0,i;
    printf("enter string : ");
    gets(arr);
    printf("the vowels are : ");
    for(i=0;arr[i];i++){
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'){
            count++;
            printf(" %c,",arr[i]);
        }
        
    }
    printf("\n");
    printf("total no of vowels is %d",count);
}