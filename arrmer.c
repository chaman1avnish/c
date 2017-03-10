#include<stdio.h>
    int main() {
    int a[100],b[100],n,m,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(i=0;i<m;i++)
    a[i+n]=b[i];
    for(i=0;i<(n+m);i++)
    printf("%d\n",a[i]);
    }
