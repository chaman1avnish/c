#include<stdio.h>
int main() {
    int i=0,n,c;
    scanf("%d",&n) ;
    for(c=1;c<=n;c++)
    {
    printf("%d\t",fib(i));
    i++;
    }
    return 0;
    }
    int fib(int n){
    if(n==0)
    return 0;
    else if(n==1)
        return 1;
    else
        return(fib(n-1)+fib(n-2));
    }
