#include <bits/stdc++.h>
using namespace std;

int main()
{
// total number of  even numbers from 2 to 100.
    int i=1, count =0;
    while(i<=100)
    {
if (i%2==0)
   {
    count++;
 cout<<i<<endl;
   }
    i++;
}
cout<< "total even numbers are = "<<count;
}