#include<stdio.h>
int main() {
    int a[100],n,i,s,e;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
        for(s=0;s<n;s++)
    {
        if(a[s]>a[s+1]){
        break;
    }
           for(e=n-1;e>=0;e--)
      {
             if(a[e]<a[e+1])
         break;
      }
        for(i=0;i<=s;i++)
        printf("%d",a[i]);
        return 0;
}          }


