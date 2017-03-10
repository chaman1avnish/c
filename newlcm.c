#include<stdio.h>
void lcm(int,int);
void main() {
int a,b;
scanf("%d%d",&a,&b);
lcm(a,b);
return 0;
}
void lcm(int a,int b) {
int m,n;
m=a;
n=b;
while(m!=n){
if(m<n)
m=m+a;
else
n=n+b;
}
printf("%d",m);
}
