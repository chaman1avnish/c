#include<stdio.h>
    int main() {
        char s1[100],i,n;
        gets(s1);
        for(i=0;s1[i]!='\0';i++)
        {
            if(s1[i]>='A'&&s1[i]<='Z')
                s1[i]=s1[i]+32;
            else
                s1[i]=s1[i]-32;
        }
        printf("%s",s1);
        }
