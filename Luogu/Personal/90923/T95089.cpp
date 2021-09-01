#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    int n = 0 ;
    cin >> n;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> s;
        s[0] = toupper(s[0]);
        for(int i = 1 ; i < s.length() ; i++)
            s[i] = tolower(s[i]);
        cout << s <<endl;
    }
    return 0;
}