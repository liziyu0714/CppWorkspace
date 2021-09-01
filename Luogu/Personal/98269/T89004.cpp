#include <bits/stdc++.h>
using namespace std;

double arctan (double x)
{
    double value = x , ans = 0;
    int i = 1 ;
    while (abs(value) > 1e-6)
    {
        ans += value;
        value *= (-1.0) * (x * x) * (2 * i - 1) / (2 * i + 1);
        i ++;
    }
    return ans;
}

int main()
{
    double x = 0 ;
    cin >> x ;
    cout << fixed << setprecision(4) << arctan(x) << endl;
    return 0;
}