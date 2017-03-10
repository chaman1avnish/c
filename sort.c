#include<stdio.h>
    int main() {
        int a[60],n,i,j,t,m;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
     }
        m=a[1]-a[0];
        for(i=2;i<n;i++)
        {
            if((a[i]-a[i-1])<m)
            m=a[i]-a[i-1];
            }
            printf("%d",m);
            }
