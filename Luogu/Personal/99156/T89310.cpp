#include <bits/stdc++.h>
using namespace std;

double f(int x ,int n)
{
    if(n == 1) return (x / (1.0 + x)) * 1.0;
    return (x * 1.0) / (n + f(x,n - 1));
}
int main()
{
    int x = 0 , n = 0;
    cin >> x >> n;
    cout << fixed << setprecision(2) << f(x,n) << endl;
    return 0;
}