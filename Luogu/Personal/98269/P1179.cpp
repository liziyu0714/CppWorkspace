#include <bits/stdc++.h>
using namespace std;

int Numof2(int n)
{
    int ans = 0;
    while (n > 0)
    {
        if (n % 10 == 2)
            ans++;
        n /= 10;
    }
    return ans;
}

int main()
{
    int L = 0, R = 0, tmp = 0, ans = 0;
    cin >> L >> R;
    for (int i = L; i <= R; i++)
        ans += Numof2(i);
    cout << ans;
    return 0;
}