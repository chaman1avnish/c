#include<stdio.h>
#include <string.h>
int main() {
    char s1[70],s2[10],m;
    int i;
    gets(s1);
    for(i=0;s1[i]!='\0';i=i+2)
    {
    s2[i]=s1[i];
    }
    for(i=0;s2[i]!='\0';i++)
    printf("%c",s2[i]);
    }
