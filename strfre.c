#include<stdio.h>
#include<string.h>
int main() {
    char str[30],ch;
    int i,g=0;
    gets(str);
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++){
    if(str[i]=='a'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='e')
    g=g+1;
    else
    g=g+2;
    }
    printf("%d",g);
    return 0;
    }
