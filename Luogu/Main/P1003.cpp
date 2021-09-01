#include <bits/stdc++.h>
using namespace std;
const int MAX = 10010; //10^5
int v[MAX][MAX];

void Fill(int a, int b, int g, int k, int n)
{
    for (int i = a; i <= g; i++)
        for (int j = b; j <= k; j++)
            v[i][j] = n;
}

int main()
{
    int a = 0, b = 0, g = 0, k = 0, n = 0, pos = 1;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> g >> k;
        Fill(a, b, g, k, pos++);
    }
    int x = 0, y = 0;
    cin >> x >> y;
    if (v[x][y] != 0)
        cout << v[x][y] << endl;
    else
        cout << -1 << endl;
    return 0;
}