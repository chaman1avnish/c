#include <iostream>
using namespace std;
int inter(int a[],int b[],int n,int m){
int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        if(a[i]==b[j])
        return a[i];
        }
        }
}
int main() {
int a[60],b[70],n,m,i,j,p;
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
cin>>m;
for(i=0;i<m;i++)
cin>>b[i];
p=inter(a,b,n,m);
cout<<p;
        return 0;
            }
