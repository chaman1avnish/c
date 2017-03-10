#include<stdio.h>
int main() {
int a[60],n,i,p=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    if(a[i]==1)
    p++;
}
printf("%d",p);
return 0;
}
