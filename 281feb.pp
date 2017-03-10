#include<bits/stdc++.h>
    int max(int a[],int n)
    int r=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        c=0;
        else
        {
            c++;
        r=max(r,c);
        }
        }
        return r;
        }
    int main() {
        int i,n,a[100];
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i];
        cout<<max(a,n)<<endl;
        return 0;
        }
