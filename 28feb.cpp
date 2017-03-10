#include<bits/stdc++.h>
using namespace std;
int printmax(int a[],int n)
{
    if(n<2)
    return -1;
    int re=a[0]+a[1];
    for(int i=1;i<n-1;i++)
    re=max(re,a[i]+a[i+1]);
    return re;
}
        int main() {
        int i,n,a[100];
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i];
        cout<<printmax(a,n)<<endl;
        return 0;
        }
