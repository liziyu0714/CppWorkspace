#include <bits/stdc++.h>
using namespace std;

string ToBin(int n)
{
    string s;
    while (n > 0)
    {
        s += char(n % 2 + '0');
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

bool IsHuiWen(string s)
{
    int len = s.length() - 1;
    for (int i = 0; i <= len / 2; i++)
        if (s[i] != s[len - i])
            return false;
    return true;
}

int main()
{
    int n = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        string tmp = to_string(i);
        string tmp2 = ToBin(i);
        if (IsHuiWen(tmp) && IsHuiWen(tmp2))
            cout << i << ":" << ToBin(i) << endl;
    }
    return 0;
}