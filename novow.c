#include<stdio.h>
#include<conio.h>
 
int main ()
{
    char c[200],c1[200];
    int t=0,i,j;
    printf("enter the string:");
    gets(c);
    for (i=0,j=0;c[i]!='\0';i++)
    {
        if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u');
        else
        {
          c1[j++]=c[i];
        }
    }
    printf("string after removals of vowels: %s",c1);
    
}
