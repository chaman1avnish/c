#include<stdio.h>
#include<string.h>
int main() {
    char s1[40],s2[90];
    int n,i,j,b,p;
    scanf("%d",&p);
    while(p){
    scanf("%s",s1);
    scanf("%s",s2);
    n=strlen(s1);
    for(i=0;i<n;i++){
    b=0;
    for(j=0;j<=i;j++){
    if(s1[i]==s2[j])
    b++;
    }
    }
    if(b!=0)
    printf("yes");
    else
    printf("no");
    }
    p--;
    }
