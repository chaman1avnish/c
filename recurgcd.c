#include<stdio.h>
int main() {
int a,b,g;
scanf("%d%d",&a,&b);
g=fd(a,b);
printf("%d",g);
return 0;
}
int fd(int x,int y){
while(x!=y)
{
    if(x>y)
    return fd(x-y,y);
    else
    return fd(x,y-x);
    }
    return x;
    }


