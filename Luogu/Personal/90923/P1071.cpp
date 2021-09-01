#include <bits/stdc++.h>
using namespace std;

char txt[26];
string s1, s2, s3;

int main()
{
    bool flag = 0;
    bool flags[26] = {0};
    cin >> s1 >> s2 >> s3;
    for (int i = 0; i < s1.length(); i++)
    {
        if ((txt[s1[i] - 'A'] == 0 || txt[s1[i] - 'A'] == s2[i]) )
            txt[s1[i]-'A'] = s2[i];
        else
        {
            flag = 1;
            break;
        }
    }
    for(int i = 0 ; i < 26 ; i ++)
        if(txt[i] == 0 || flags[txt[i] - 'A'])
        {
            flag = 1;
            break;
        }
        else
        {
            flags[txt[i] - 'A'] = 1;
        }
    if(flag) cout<<"Failed";
    else
    {
        for(int i = 0 ; i < s3.length() ; i ++)
            cout << txt[s3[i]-'A'];
    }
    return 0;
}