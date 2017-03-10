#include<stdio.h>
int main() {
int n,i,j,b=0;
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0){
b=b+1;
break;
}
}
if(b==0)
printf("p");
else
printf("n");
}
