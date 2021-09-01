#include <bits/stdc++.h>
using namespace std;

int a[11];string s;
 
void read()
{
    cin >> s;
    int j = 0 ;
    for(int i = 0 ; i < s.length() ; i ++)
        if(isdigit(s[i]))
            a[j ++] = s[i] - '0';
        else if(s[i] == 'X')
            a[j ++] = 10;
    return;
}

int Mod()
{
    int ans = 0 ;
    for(int i = 0 ; i < 9 ; i ++)
        ans += a[i] * (i + 1);
    return ans % 11;
}

void output()
{
    cout << a[0] << "-";
    for(int i = 1 ; i < 4 ; i ++)
        cout << a[i];
    cout << "-";
    for(int i = 4 ; i < 9 ; i ++)
        cout << a[i];
    cout << "-";
    if(Mod() == 10)
        cout << 'X' << endl;
    else
        cout << Mod() << endl;
}

int main()
{
    read();
    if(a[9] == Mod())
        cout << "Right" << endl;
    else
        output();
    return 0;
}