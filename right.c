#include<stdio.h>
    int main() {
    int a[100],b[30],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        b[i]=0;
    }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)

            {
                if(a[j]<a[i])
                {
                b[i++];
                }
                }
                }
                for(i=0;i<n;i++)
                printf("%d",a[i]);
                return 0;
                }
