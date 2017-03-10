#include<iostream>
#include<climits>
#include<cstdlib>
using namespace std;
void cl(int a[],int n,int x)
{
int r=0,s=n-1,res_r,res_s,diff=INT_MAX;
while(s>1) {
if(abs(a[s]+a[r]-x)<diff)
{
res_r=r;
res_s=s;
diff=abs(a[s]+a[r]-x);
 }
 if(a[s]+a[r]>x)
 s--;
 else
 r++;
 }
 cout<<a[res_s]<<a[res_r];
 }
 int main() {
 int a[50],n,x,i;
 cin>>n;
 cin>>x;
 for(i=0;i<n;i++)
 cin>>a[i];
 cl(a,n,x);
 }
