#include<bits/stdc++.h>
using namespace std;
string s;
int main ()
{
    int p = 1 , ans = 0 ;
    cin >> s;
    for(int i = s.size() - 1 ; i >= 0 ; i --)
    {
        ans += int (s[i] - '0') * p ;
        p *= 2 ;
    }
    cout << ans << endl ;
}