#include<stdio.h>
#include<string.h>
int main() {
int a[90],n,lc,i,m;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&m);
scanf("%d",&lc);
i=n;
while(i>=lc){
a[i]=a[i-1];
i--;
}
n++;
a[lc-1]=m;
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}



