#include<stdio.h>
int main() {
int *a,n,i,p,m;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&p);
scanf("%d",&m);
for(i=n-1;i>=p-1;i--)
a[i+1]=a[i];
a[p-1]=m;
for(i=0;i<=n;i++)
printf("%d",a[i]);
return 0;
}

