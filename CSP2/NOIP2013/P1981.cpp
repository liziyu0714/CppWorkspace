#include <bits/stdc++.h>
using namespace std;

stack<int> stk;

int main()
{
    string s;
    cin >> s;
    int start = 0 , end = 0;
    for(int i = 0 ; i < s.size() ; i ++)
    {
        if(s[i] == '+' || s[i] == '*')
        {
            int num = stoi(s.substr(0,i)) % 10000;
            stk.push(num);
            start = i + 1;
            break;
        }
    }
    for(int i = 0 ; i < s.size() ; i ++)
    {
       
    }
    int sum = 0 ;
    while(!stk.empty())
    {
        sum += stk.top();
        sum %= 10000;
        stk.pop();
    }
    cout << sum << endl;
    return 0;
}