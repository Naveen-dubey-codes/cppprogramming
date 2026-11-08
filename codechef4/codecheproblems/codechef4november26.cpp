/*You want to pay exactly (N) rupees to a shop.
You have one coin worth 5 rupees and an unlimited supply of coins worth 1 rupee each.
Find the minimum number of coins you must use to pay exactly (N) rupees.
 You may use the 5-rupee coin at most once.

Input Format

• The first and only line of input will contain a single integer (N) — the amount to be paid, in rupees.

Output Format

• Output a single integer: the minimum number of coins required.

Constraints

• 1<=N<=20 . */


#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

if(n<=4)
{
cout<<n;
}
else if (n>5)
{
    n =( n-4);
    cout<<n<<endl;
}
return 0;
}
