#include <bits/stdc++.h>
using namespace std;

//sum of series 1(squared)+2(squared)+3(squared)+4(squared)+5(squared).........
int main()
{
    int i=1 ,n, sum=0 ;
cin>>n;

    for(int i=1; i<=n ;i++)
    {
     sum=sum+( i*i);
     cout<<sum<<endl;
    }
cout<<sum;
return 0;
}