#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n ,  r=0;
cin>>n;
// here we are finding reverse of a number.
while(n>0)
{
    int a = n%10;
    r= r*10+a;
    n=n/10;
}
cout<<r;
}