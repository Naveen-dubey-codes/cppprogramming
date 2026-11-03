#include <bits/stdc++.h>

using namespace std ;

int main () {

    float  g_salary, basic, da , ha , pf ;
    cin>> basic;

    da =( 150/100)* basic;

    ha = (25/100)* basic ;

    pf = (15/100)* basic ;

    g_salary =( basic + da + ha - pf );

    cout<< g_salary ;

    return 0;
}