#include <iostream>
using namespace std;
void swap(int num1,int num2){
int temp;
temp=num1;
num1=num2;
num2=temp;
}
int main() {
int n1,n2;
cin>>n1;
cin>>n2;
swap(n1,n2);
cout<<n1;
cout<<n2;
return 0;
}
