#include <bits/stdc++.h>
using namespace std;

void Count(string s , int num)
{
    int win = 0 , lose = 0 , len = s.length();
    for(int i = 0 ; i < len ; i ++)
    {
        if(s[i] == 'E') break;
        else if(s[i] == 'W') win ++;
        else if(s[i] == 'L') lose ++;
        if((win >= num || lose >= num) && (abs(win - lose) >= 2) )
        {
            cout << win << ":" << lose << endl;
            win = lose = 0;
        }
    }
    cout << win << ":" << lose << endl;
    return;
}

int main()
{
    string s ;
    string tmp;
    while (cin >> tmp)
        s += tmp;    
    Count(s,11);
    cout << endl;
    Count(s,21);
    return 0;
}