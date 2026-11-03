#include <bits/stdc++.h>
using namespace std;

int main (){

    int a,b,c;
    cin>>a>>b>>c;

    a>b&&a>c?cout<<"a is greatest.":cout<<"a is not greatest.";

    b>c&&b>a?cout<<"b is greatest.":cout<<"b is not greatest.";

    c>a&&c>b?cout<<"c is greatest.":cout<<"c is not greatest.";

    return 0;
}