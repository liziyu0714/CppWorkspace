#include <bits/stdc++.h>
using namespace std;

int gcd(int m , int n)
{
    return (n == 0) ? m : gcd ( n , m % n);
}

int main()
{
    int n = 0 , m = 0 ;
    cin >> n >> m;
    cout << gcd (n ,m) << " " << (n * m) / gcd (n ,m) << endl;
    return 0;
}