#include<bits/stdc++.h>
    int max(int a[],int n) {
    int result;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        count=0;
        else
        {
        count++;
        result=max(result,count);
        }
        }
        return result;
        }
    int main() {
        int i,n,a[100];
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i];
        cout<<max(a,n)<<endl;
        return 0;
        }
