#include <bits/stdc++.h>
using namespace std;

int F91(int n)
{
    return (n <= 100) ? F91(F91(n + 11)) : n - 10;
}

int main()
{
    int n = 0 ;
    cin >> n;
    while(n != 0)
    {
        cout << "f91(" << n << ") = " << F91(n) << endl;
        cin >> n;
    }
}