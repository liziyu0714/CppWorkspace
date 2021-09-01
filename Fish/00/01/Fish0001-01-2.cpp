#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
    int ans = 0 ;
    cin >> s ;
    for(int i = 0 ; i < s.size() ; i ++)
        ans = ans * 2 + int (s [i] - '0');
    cout<< ans << endl ;
}