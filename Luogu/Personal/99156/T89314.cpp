#include <bits/stdc++.h>
using namespace std;

double f(double x , int n)
{
    if(n == 1) return sqrt(1 + x);
    return sqrt(n + f(x,n - 1));
}

int main()
{
    double x = 0;
    int n = 0;
    cin >> x >> n;
    cout << fixed << setprecision(2) << f(x,n) << endl;
    return 0;
}