#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m)
{
    if (m > 0)
        return gcd(m, n % m );
    else
        return n;
}

int main()
{
    int a = 0, b = 0;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}