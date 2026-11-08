#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,i,a , sum =0;
    cin>>n;
    if(n<10)
    {
        cout<<n;
    }
    else
    
    for(i=n ; i>0 ; i=i/10)

{
    int a = i%10;
    sum = sum + a*a*a;
}
if (n==sum)
{
cout<<"is armstrong";
}
else
{
cout<<"is not armstrong";
}
}