#include<stdio.h>
    int main() {
    char s1[100],s2[100];
    int i=0,n=0,k;
    gets(s1);
    gets(s2);
    scanf("%d",&k);
    while(s1[i]!='\0')
        {
            if(s1[i]!=s2[i])
            n++;
            i++;
        }
        if(k>=n)
        printf("y");
        else
        printf("no");
        }
