#include <bits/stdc++.h>
using namespace std;

double h(double n, double x)
{
    if (n == 0)
        return 1.0;
    else if (n == 1)
        return 2.0 * x;
    else if (n > 1)
        return 2.0 * x * h(n - 1.0, x) - 2.0 * (n - 1) * h(n - 2.0, x);
    return 0.0;
}

int main()
{
    double n = 0, x = 0;
    cin >> x >> n;
    cout << fixed << setprecision(2) << h(n, x) << endl;
    return 0;
}