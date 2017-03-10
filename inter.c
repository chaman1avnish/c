#include<stdio.h>
    int main() {
        int a[70],n,k,c,i;
        float j;
        scanf("%d",&n);
        scanf("%d",&k);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            j=k/a[n];
            c=j*n;
            printf("%d",c);
            return 0;
            }
