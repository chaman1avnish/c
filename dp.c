#include<stdio.h>
    int main() {
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[abs(a[i])]<0)
        {
            printf("%d",a[i]);
            }

      }
      return 0;
      }
