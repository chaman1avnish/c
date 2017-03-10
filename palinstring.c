#include<stdio.h>
#include<string.h>
int main() {
    char s1[100],rev[100];
    int l,f,i;
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
    l++;
    }
    for(i=l-1;i>=0;i--)
        {
            rev[l-i-1]=s1[i];
        }
        for(i=0;i<l;i++)
            {
            if(s1[i]==rev[i])
            f=1;
            else
            f=0;
            }
    if(f==1)
    printf("p");
    else
    printf("no");
}
