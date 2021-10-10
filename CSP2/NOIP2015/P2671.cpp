#include <bits/stdc++.h>
using namespace std;

int n, m, numbers[100010], colors[100010];

void read()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> numbers[i];
    for (int i = 1; i <= n; i++)
        cin >> colors[i];
    return;
}

int main()
{
    read();
    long long sum = 0;
    for (int x = 1; x <= n; x++)
        for (int y = x + 1; y <= (n + x) / 2; y++)
        {
            int z = 2 * y - x;
            if(!((x % 2 == 0 && z % 2 == 0) || (x % 2 != 0 && z % 2 != 0)))
                continue;
            if (x < y && y < z && (y - x) == (z - y) && colors[x] == colors[z])
                sum += (x + z) * (numbers[x] + numbers[z]) % 10007;
        }
    cout << sum % 10007 << endl;
    return 0;
}