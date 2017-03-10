#include<stdio.h>
int main() {
    int n,i,fl;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0){
        fl=1;
        break;
        }
        }
        if(fl==0)
        printf("yes");
        else
        printf("no");
    }
