#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    getline(cin,s);
    for(int i = 0 ; i < s.length() ; i ++)
    {
        if(s[i] != 'z' && s[i] != 'Z')
        {
            if(isalpha(s[i])) cout << (char) (s[i] + 1) ;
            else cout << s[i];
        }
        else  (s[i] == 'z') ? (cout << 'a') : (cout << 'A');
    }
    return 0;
}