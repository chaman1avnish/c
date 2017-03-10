#include<stdio.h>
#include<limits.h>
    int main() {
        int a[60],n,r=n-1,l=0,res_l,res_r,x,i,diff=INT_MAX;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        scanf("%d",&x);
        while(r>l){
        if(abs(a[r]+a[l]-x)<diff){
        res_l=l;
        res_l=r;
        diff=abs(a[r]+a[l]-x);
        }
        if(a[r]+a[l]>x)
        r--;
        else
        l++;
}
        printf("%d%d",a[res_l],a[res_r]);
        return 0;
        }
