#include <bits/stdc++.h>
using namespace std;

int main () {

    float A,s,a,b,c ;
    cin>>a>>b>>c;

    s= (a+b+c)/2;

    A= sqrt(s*(s-a)*(s-b)*(s-c)) ;

    cout<<A;

    return 0;
}