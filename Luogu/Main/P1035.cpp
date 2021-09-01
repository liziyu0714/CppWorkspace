#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k = 0 ;
    double n = 1.0 , ans = 0;
    cin >> k;
    while (ans < k)
    {
        ans += 1.0 / n;
        n ++;
    }
    cout << n - 1 << endl;
    return 0;
}