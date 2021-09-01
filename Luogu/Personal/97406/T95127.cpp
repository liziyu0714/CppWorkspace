#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    bool flag = 0;
    int len = 0 ;
    getline(cin,s);
    s += ' ';
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] != ' ') len ++;
        else if(len != 0)
        {
            if(!flag)
            {
                cout << len;
                flag = 1;
            }
            else cout << "," << len;
            len = 0;
        }
    }
    return 0;
}