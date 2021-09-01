#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    cin >> s;
    int n = 0;
    bool flag = 1;
    if(s.substr(s.length() - 2 , s.length()) == "er" || s.substr(s.length() - 2 , s.length()) == "ly" ) 
        s.erase(s.length() - 2 , s.length());
    else if(s.substr(s.length() - 3 , s.length()) == "ing") 
        s.erase(s.length() - 3 , s.length());
    cout << s;
    return 0;
}