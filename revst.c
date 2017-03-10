#include<stdio.h>
#include<string.h>
int main() {
 char str[100],i,j,t;
 gets(str);
 i=-1;
 j=strlen(str)-1;
 while(i<=j){
 t=str[i];
 str[i]=str[j];
 str[j]=t;
 i++;
 j--;
 }
 printf("%s",str);
 }

