#include<stdio.h>
int main() {
    int a[60],b[60],c[60],n,m,i,j,k=0,f;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        {
        c[k]=a[i];
        k++;
        }
            for(i=0;i<n;i++)
            {
                f=0;
                for(j=0;j<m;j++)
                {
                    if(b[i]==c[j])
                    {
                        f=1;
                        break;
                      }
                 }
                 if(f=0)
                 {
                    c[k]=b[i];
                    k++;
                 }
             }
             for(i=0;i<k;i++)
             printf("%d",c[i]);
             return 0;
             }
