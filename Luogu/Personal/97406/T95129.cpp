#include <bits/stdc++.h>
using namespace std;

char txt[29];
string s;

void Maketxt()
{
    for (int i = 0; i < 26; i++)
        txt[i] = 'a' + i;
    txt[26] = 'a';
    txt[27] = 'b';
    txt[28] = 'c';
}

int main()
{
    Maketxt();
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (islower(s[i]))
            s[i] = txt[s[i] - 'a' + 3];
        else
            s[i] = toupper(txt[s[i] - 'A' + 3]);
    for (int i = 0; i < s.length(); i++)
        if (islower(s[i]))
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}