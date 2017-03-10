#include<stdio.h>
    int main() {
        int a[60],n,i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        int t[n];
        for(i=0;i<n;i++)
        {
        t[a[i]]=i;
        }
        for(i=0;i<n;i++)
        {
            a[i]=t[i];
        }
        for(i=0;i<n;i++)
        printf("%d",a[i]);
        return 0;
                }

