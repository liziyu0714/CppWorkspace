#include <bits/stdc++.h>
using namespace std;

bool check(int n , int d)
{
    while (n > 0)
    {
        if(n%10 == d) return true;
        else n /= 10;
    }
    return false;
}

int main()
{
    int n = 0 , d = 0 ;
    cin >> n >> d;
    if(check(n,d)) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}