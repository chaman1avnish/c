#include<stdio.h>
    int main() {
    int a[70],n,i,m,f,l,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&p);
    f=0;
    l=n-1;
    m=f+(f+l)/2;
    while(f<=l){
    if(a[m]<p)
    f=m+1;
    else if(a[m]==p){
    printf("%d",m+1);
    break;
    }
    else
    l=m-1;
    m=f+(f+l)/2;
    }
    if(f>l)
    printf("no element");
    return 0;
    }


