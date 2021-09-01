#include <bits/stdc++.h>
using namespace std;

int max3(int a, int b, int c)
{
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    return max;
}

int main()
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    cout << fixed << setprecision(2) << ((max3(a, b, c) * 1.0) / (max3(a + b, b, c) * max3(a, b, b + c))) * 100.0;
    return 0;
}