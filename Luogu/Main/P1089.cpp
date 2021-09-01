#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool flag = false;
    int cost = 0 , now = 0  , sum = 0 , res = 0;
    for(int i = 0 ; i < 12 ; i ++)
    {
        cin >> cost;
        now = 300 + res - cost;
        if(now < 0)
        {
            cout << "-" << i + 1 << endl;
            flag = true;
            break;
        }
        sum += now / 100;
        res = now % 100;
    }
    if(!flag)
        cout << sum * 120 + res << endl;
    return 0;
}