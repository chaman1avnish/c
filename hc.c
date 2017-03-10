#include<stdio.h>
    int main() {
    int a[400],n,i,j,k,c=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
             if((a[i]*a[j])%k==0)
                    c++;
              }
          }
      printf("%d",c);
      }



