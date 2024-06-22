#include<stdio.h>
int main(){
    int a1[]={1,2,3,4},a2[]={5,6,7,8},a3[50];
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            a3[i]=a1[j];
        }
    }
     for(i=4;i<8;i++){
        for(j=0;j<4;j++){
            a3[i]=a2[j];
        }
    }
    for(i=0;i<8;i++){
        printf("%d",a3[i]);
    }

}