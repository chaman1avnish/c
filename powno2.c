#include<stdio.h>
    int main() {
        int n,m=0,p;
        scanf("%d",&n);
        while(n>2){
        p=n%2;
        if(p==1)
        m++;
        n=n/2;
        }
        if(m>=1)
        printf("no");
        else
        printf("yes");
        }
