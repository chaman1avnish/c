#include<stdio.h>
int main() {
    int n,i,p,f;
    scanf("%d",&n);
    while(n>2)
    {
    p=n%2;
    if(p==1)
    {
    f=1;
    break;
    }
    else
    n=n/2;
    }
    if(f==1)
    printf("no");
    else
    printf("yes");
    }
