#include <bits/stdc++.h>
using namespace std;

bool f(int i)
{
    int ans = 0;
    if(i < 0) i = -i;
    while (i > 0)
    {
        ans += i % 10;
        i /= 10;
    }
    if (ans == 8)
        return true;
    else
        return false;
}

int main()
{
    int a = 0 , b = 0 , ans = 0 ;
    cin >> a >> b;
    for(int i = a ; i <= b ; i ++)
    {
        if(f(i)) ans ++;
    }
    cout << ans;
}