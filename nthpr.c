#include<stdio.h>
    int main() {
    int n,i,j,c,m=0;
    scanf("%d",&n);
    for(i=2;i<100;i++)
    {
    c=0;
        for(j=2;j<i/2;j++)
        {
            if(i%j==0){
            c=1;
            break;
            }
            }
            if(c==0)
            m++;
            if(m==n)
            {
            printf("%d",i);
            break;
            }
            }
            return 0;
            }
