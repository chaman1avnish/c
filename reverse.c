#include<stdio.h>
int main() {
    int n,a,r=0;
    scanf("%d",&n);
    while(n!=0){
    a=n%10;
    r=r*10+a;
    n=n/10;
    }
    printf("%d",r);
    }
